/****************************************************************************
 *
 * Copyright 2020 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @brief Offboard control example
 * @file offboard_control.cpp
 * @addtogroup examples
 * @author Mickey Cowden <info@cowden.tech>
 * @author Nuno Marques <nuno.marques@dronesolutions.io>

 * The TrajectorySetpoint message and the OFFBOARD mode in general are under an ongoing update.
 * Please refer to PR: https://github.com/PX4/PX4-Autopilot/pull/16739 for more info.
 * As per PR: https://github.com/PX4/PX4-Autopilot/pull/17094, the format
 * of the TrajectorySetpoint message shall change.
 */

#include <px4_msgs/msg/offboard_control_mode.hpp>
#include <px4_msgs/msg/trajectory_setpoint.hpp>
#include <px4_msgs/msg/timesync.hpp>
#include <px4_msgs/msg/vehicle_command.hpp>
#include <px4_msgs/msg/vehicle_control_mode.hpp>
#include <px4_msgs/msg/trajectory_setpoint.hpp>
#include <px4_msgs/msg/vehicle_odometry.hpp>
// #include <px4_msgs/msg/position_setpoint_triplet.hpp>
#include <rclcpp/rclcpp.hpp>
#include "geometry_msgs/msg/twist.hpp"
#include <stdint.h>
#include "tf2/LinearMath/Quaternion.h"
#include "tf2/LinearMath/Matrix3x3.h"
#include <chrono>
#include <iostream>
#include <functional>
#include <memory>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <limits>
#include <vector>
#include <string>
using namespace std::chrono;
using namespace std::chrono_literals;
using namespace px4_msgs::msg;

class OffboardControl : public rclcpp::Node
{
public:
	OffboardControl() : Node("offboard_control")
	{
#ifdef ROS_DEFAULT_API
		offboard_control_mode_publisher_ =
			this->create_publisher<OffboardControlMode>("fmu/offboard_control_mode/in", 10);
		trajectory_setpoint_publisher_ =
			this->create_publisher<TrajectorySetpoint>("fmu/trajectory_setpoint/in", 10);
		vehicle_command_publisher_ =
			this->create_publisher<VehicleCommand>("fmu/vehicle_command/in", 10);
		// triplet_publisher =
		//	this->create_publisher<PositionSetpointTriplet>("fmu/position_setpoint_triplet/in", 10); //("fmu/trajectory_setpoint/in");
#else
		offboard_control_mode_publisher_ =
			this->create_publisher<OffboardControlMode>("fmu/offboard_control_mode/in");
		trajectory_setpoint_publisher_ =
			this->create_publisher<TrajectorySetpoint>("fmu/trajectory_setpoint/in"); //("fmu/trajectory_setpoint/in");
		// triplet_publisher =
		//	this->create_publisher<PositionSetpointTriplet>("fmu/position_setpoint_triplet/in"); //("fmu/trajectory_setpoint/in");
		vehicle_command_publisher_ =
			this->create_publisher<VehicleCommand>("fmu/vehicle_command/in");
#endif

		// get common timestamp
		timesync_sub_ =
			this->create_subscription<px4_msgs::msg::Timesync>("fmu/timesync/out", 10,
															   [this](const px4_msgs::msg::Timesync::UniquePtr msg)
															   {
																   timestamp_.store(msg->timestamp);
															   });

		offboard_setpoint_counter_ = 0;

		auto timer_callback = [this]() -> void
		{
			if (offboard_setpoint_counter_ == 10)
			{
				// Change to Offboard mode after 10 setpoints
				this->publish_vehicle_command(VehicleCommand::VEHICLE_CMD_DO_SET_MODE, 1, 6);

				// Arm the vehicle
				this->arm();
			}

			// offboard_control_mode needs to be paired with trajectory_setpoint
			publish_offboard_control_mode();
			publish_trajectory_setpoint();

			// stop the counter after reaching 11
			if (offboard_setpoint_counter_ < 11)
			{
				offboard_setpoint_counter_++;
			}
		};
		timer_ = this->create_wall_timer(100ms, timer_callback);
		subscription_ = this->create_subscription<geometry_msgs::msg::Twist>(
			"cmd_vel", 10,
			std::bind(&OffboardControl::OnVelVect, this, std::placeholders::_1));
		odom_subscription_ = this->create_subscription<px4_msgs::msg::VehicleOdometry>(
			"/fmu/vehicle_odometry/out", 10,
			std::bind(&OffboardControl::odom_convert, this, std::placeholders::_1));
	}
	float xv = 0.0, yv = 0.0, yawv = 0.0;
	float CurrYaw = 0.0;
	float Altcmd = 0.0;

private:
	rclcpp::TimerBase::SharedPtr timer_;

	rclcpp::Publisher<OffboardControlMode>::SharedPtr offboard_control_mode_publisher_;
	rclcpp::Publisher<TrajectorySetpoint>::SharedPtr trajectory_setpoint_publisher_;
	rclcpp::Publisher<VehicleCommand>::SharedPtr vehicle_command_publisher_;
	rclcpp::Subscription<px4_msgs::msg::Timesync>::SharedPtr timesync_sub_;
	rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr subscription_;
	rclcpp::Subscription<px4_msgs::msg::VehicleOdometry>::SharedPtr odom_subscription_;
	// rclcpp::Publisher<PositionSetpointTriplet>::SharedPtr triplet_publisher;

	std::atomic<uint64_t>
		timestamp_; //!< common synced timestamped

	uint64_t offboard_setpoint_counter_; //!< counter for the number of setpoints sent
	void arm() const;
	void disarm() const;
	void publish_offboard_control_mode() const;
	void publish_trajectory_setpoint() const;
	void publish_vehicle_command(uint16_t command, float param1 = 0.0,
								 float param2 = 0.0) const;
	void OnVelVect(const geometry_msgs::msg::Twist::UniquePtr msg);
	void odom_convert(const px4_msgs::msg::VehicleOdometry::SharedPtr _msg);
};

/**
 * @brief Send a command to Arm the vehicle
 */
void OffboardControl::arm() const
{
	publish_vehicle_command(VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, 1.0);

	RCLCPP_INFO(this->get_logger(), "Arm command send");
}

/**
 * @brief Send a command to Disarm the vehicle
 */
void OffboardControl::disarm() const
{
	publish_vehicle_command(VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, 0.0);

	RCLCPP_INFO(this->get_logger(), "Disarm command send");
}

/**
 * @brief Publish the offboard control mode.
 *        For this example, only position and altitude controls are active.
 */
void OffboardControl::publish_offboard_control_mode() const
{
	OffboardControlMode msg{};
	msg.timestamp = timestamp_.load();
	msg.position = true;
	msg.velocity = true;
	msg.acceleration = false;
	msg.attitude = false;
	msg.body_rate = false;

	offboard_control_mode_publisher_->publish(msg);
}
void OffboardControl::OnVelVect(const geometry_msgs::msg::Twist::UniquePtr msg)
{
	OffboardControl::xv = -msg->linear.x * cos(OffboardControl::CurrYaw) + msg->linear.y * sin(OffboardControl::CurrYaw);
	OffboardControl::yv = -msg->linear.y * cos(OffboardControl::CurrYaw) - msg->linear.x * sin(OffboardControl::CurrYaw);
	OffboardControl::yawv = -msg->angular.z;
	// OffboardControl::hasReceivedLaserScanMsgs = true;
}

void OffboardControl::odom_convert(const px4_msgs::msg::VehicleOdometry::SharedPtr _msg)
{
	tf2::Quaternion q_tmp;
	tf2::Quaternion q_ori, q_final;
	q_ori.setRPY(0.0, 0.0, 0.0);
	q_ori.normalize();
	q_tmp[0] = 0.0; //_msg->q[0];
	q_tmp[1] = 0.0; //_msg->q[1];
	q_tmp[2] = _msg->q[0];
	q_tmp[3] = _msg->q[3];
	q_tmp.normalize();
	q_final = q_tmp * q_ori;
	q_final.normalize();
	tf2::Matrix3x3 m(q_final);
	double roll, pitch, yaw;
	m.getRPY(roll, pitch, yaw);
	OffboardControl::CurrYaw = -yaw;
	if (_msg->position[2] > -1.3)
		OffboardControl::Altcmd = -0.1;
	else if (_msg->position[2] < 1.7)
		OffboardControl::Altcmd = 0.1;
	else
		OffboardControl::Altcmd = 0.0;
}
/**
 * @brief Publish a trajectory setpoint
 *        For this example, it sends a trajectory setpoint to make the
 *        vehicle hover at 5 meters with a yaw angle of 180 degrees.
 */

void OffboardControl::publish_trajectory_setpoint() const
{
	TrajectorySetpoint msg{};
	msg.timestamp = timestamp_.load();
	// msg.position = {0.0, 0.0, -5.0};
	msg.position = {NAN, NAN, NAN};
	msg.velocity = {OffboardControl::xv, OffboardControl::yv, OffboardControl::Altcmd}; //   backwards left,down
	msg.yaw = NAN;																		// [-PI:PI]
	msg.yawspeed = OffboardControl::yawv;

	trajectory_setpoint_publisher_->publish(msg);
}
/*
void OffboardControl::publish_trajectory_setpoint() const
{
	PositionSetpoint msg{};
	msg.timestamp = timestamp_.load();
	// msg.position = {0.0, 0.0, -5.0};
	// msg.position = {NAN, NAN, NAN};
	msg.valid = 1;
	msg.type = 1;
	// msg.x = NAN;
	// msg.y = NAN;
	// msg.z = NAN;
	msg.vx = OffboardControl::xv;
	msg.vy = OffboardControl::yv;
	msg.vz = 0.0;
	msg.velocity_valid = 1;
	msg.velocity_frame = 8;
	// msg.velocity = {OffboardControl::xv, OffboardControl::yv, 0.0}; //   backwards left,down
	msg.yaw = NAN; // [-PI:PI]
	msg.yawspeed = OffboardControl::yawv;

	trajectory_setpoint_publisher_->publish(msg);
	PositionSetpointTriplet msg2{};
	msg2.current = msg;
	triplet_publisher->publish(msg2);
}
*/
/**
 * @brief Publish vehicle commands
 * @param command   Command code (matches VehicleCommand and MAVLink MAV_CMD codes)
 * @param param1    Command parameter 1
 * @param param2    Command parameter 2
 */
void OffboardControl::publish_vehicle_command(uint16_t command, float param1,
											  float param2) const
{
	VehicleCommand msg{};
	msg.timestamp = timestamp_.load();
	msg.param1 = param1;
	msg.param2 = param2;
	msg.command = command;
	msg.target_system = 1;
	msg.target_component = 1;
	msg.source_system = 1;
	msg.source_component = 1;
	msg.from_external = true;

	vehicle_command_publisher_->publish(msg);
}

int main(int argc, char *argv[])
{
	std::cout << "Starting offboard control node..." << std::endl;
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<OffboardControl>());

	rclcpp::shutdown();
	return 0;
}
