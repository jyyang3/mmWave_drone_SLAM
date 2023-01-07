#include <rclcpp/rclcpp.hpp>
#include <px4_msgs/msg/vehicle_odometry.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <px4_msgs/msg/timesync.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <functional>
#include <memory>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <ctime>
#include <math.h>
#include <limits>
#include <vector>
#include <string>
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_broadcaster.h"
#include <stdint.h>
using namespace std::chrono;
using namespace std::chrono_literals;
using namespace px4_msgs::msg;

// creates a Px4OdomTransform class that subclasses the generic rclcpp::Node base class.
class Px4OdomTransform : public rclcpp::Node
{

	// Creates a function for when messages are to be sent.
	// Messages are sent based on a timed callback.
public:
	Px4OdomTransform() : Node("Odom_converter")
	{
		odom_publisher_ = this->create_publisher<nav_msgs::msg::Odometry>("/odom", 10);

		subscription_ = this->create_subscription<px4_msgs::msg::VehicleOdometry>(
			"/fmu/vehicle_odometry/out", 10,
			std::bind(&Px4OdomTransform::odom_convert, this, std::placeholders::_1));
		scan_subscription_ =
			this->create_subscription<sensor_msgs::msg::LaserScan>("/scan", 10,
																   [this](const sensor_msgs::msg::LaserScan::SharedPtr _scan)
																   {
																	   timestamp_ = _scan->header.stamp;
																   });
		tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
		footprint_tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this); // footprint to base_link;
		baselink_tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);  // base_link to lidar_link
																						   // timesync_sub_ =
																						   // 	this->create_subscription<px4_msgs::msg::Timesync>("fmu/timesync/out", 10,
																						   // 													   [this](const px4_msgs::msg::Timesync::UniquePtr msg)
																						   // 													   {
																						   // 														   timestamp_.store(msg->timestamp);
																						   // 													   });
	}

	~Px4OdomTransform()
	{
		RCLCPP_INFO(this->get_logger(), "Shutting down Odom_converter..");
	}

private:
	rclcpp::TimerBase::SharedPtr timer_;
	rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_publisher_;
	rclcpp::Subscription<px4_msgs::msg::VehicleOdometry>::SharedPtr subscription_;
	rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_subscription_;
	std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
	std::shared_ptr<tf2_ros::TransformBroadcaster> baselink_tf_broadcaster_;
	std::shared_ptr<tf2_ros::TransformBroadcaster> footprint_tf_broadcaster_;
	// std::vector<float> objects_dist;
	// std::vector<float> objects_angl;

	// rclcpp::Subscription<px4_msgs::msg::Timesync>::SharedPtr timesync_sub_;

	std_msgs::msg::Header_<std::allocator<void>>::_stamp_type timestamp_;
	void odom_convert(const px4_msgs::msg::VehicleOdometry::SharedPtr _msg);
};

// converts lidar data to pointcloud of detected objects to simulate sparse mmwave
void Px4OdomTransform::odom_convert(const px4_msgs::msg::VehicleOdometry::SharedPtr _msg)
{

	auto odom_msg = nav_msgs::msg::Odometry();
	odom_msg.header = std_msgs::msg::Header();
	odom_msg.header.stamp = timestamp_; // _scan->header.stamp; // this->get_clock()->now();
	std::string frameID = "odom";
	std::string childID = "base_footprint";
	odom_msg.header.frame_id = frameID;
	odom_msg.child_frame_id = childID;
	// odom_msg.pose.pose.position.x = _msg->position[1];
	// odom_msg.pose.pose.position.y = _msg->position[0];
	// odom_msg.pose.pose.position.z = -_msg->position[2];
	odom_msg.pose.pose.position.x = _msg->position[1];
	odom_msg.pose.pose.position.y = _msg->position[0];
	odom_msg.pose.pose.position.z = -_msg->position[2]; // baidalan
	// odom_msg.pose.pose.orientation.x = _msg->q[1];
	// odom_msg.pose.pose.orientation.y = _msg->q[0];
	// odom_msg.pose.pose.orientation.z = -_msg->q[2];
	// odom_msg.pose.pose.orientation.w = _msg->q[3];
	tf2::Quaternion q_tmp;
	tf2::Quaternion q_ori, q_final;
	tf2::Quaternion q_radar;
	q_radar.setRPY(0.0, 0.0, -1.571);
	q_radar.normalize();
	q_ori.setRPY(0.0, 0.0, -1.571);
	q_ori.normalize();
	q_tmp[0] = 0.0; //_msg->q[0];
	q_tmp[1] = 0.0; //_msg->q[1];
	q_tmp[2] = _msg->q[0];
	q_tmp[3] = _msg->q[3];
	q_tmp.normalize();
	q_final = q_tmp * q_ori;
	q_final.normalize();
	// odom_msg.pose.pose.orientation.x = q_final[0];
	// odom_msg.pose.pose.orientation.y = q_final[1];
	// odom_msg.pose.pose.orientation.z = q_final[2];
	// odom_msg.pose.pose.orientation.w = q_final[3];
	odom_msg.pose.pose.orientation.x = q_final[0];
	odom_msg.pose.pose.orientation.y = q_final[1];
	odom_msg.pose.pose.orientation.z = q_final[2];
	odom_msg.pose.pose.orientation.w = q_final[3];
	// odom_msg.pose.pose.orientation.x = (_msg->q[0] - _msg->q[3]) * sqrt(2) / 2;
	// odom_msg.pose.pose.orientation.y = (-_msg->q[2] + _msg->q[1]) * sqrt(2) / 2;
	// odom_msg.pose.pose.orientation.z = (-_msg->q[0] - _msg->q[1]) * sqrt(2) / 2;
	// odom_msg.pose.pose.orientation.w = (_msg->q[1] - _msg->q[0]) * sqrt(2 / 2);
	odom_msg.pose.covariance = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
								0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
								0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
								0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
								0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
								0.0, 0.0, 0.0, 0.0, 0.0, 1.0};
	;
	odom_msg.twist.twist.linear.x = _msg->velocity[1]; // bailan
	odom_msg.twist.twist.linear.y = _msg->velocity[0];
	odom_msg.twist.twist.linear.z = -_msg->velocity[2];
	odom_msg.twist.twist.angular.x = 0.0;
	odom_msg.twist.twist.angular.y = 0.0;
	odom_msg.twist.twist.angular.z = 0.0; //-_msg->angular_velocity[2];
	odom_msg.twist.covariance = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
								 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
								 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
								 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
								 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
								 0.0, 0.0, 0.0, 0.0, 0.0, 1.0};
	geometry_msgs::msg::TransformStamped t;

	t.header.stamp = timestamp_; //_scan->header.stamp; // this->get_clock()->now();
	t.header.frame_id = "odom";
	t.child_frame_id = "base_footprint";
	// t.transform.translation.x = _msg->position[1];
	// t.transform.translation.y = _msg->position[0];
	// t.transform.translation.z = -_msg->position[2];
	// t.transform.rotation.x = q_final[0];
	// t.transform.rotation.y = q_final[1];
	// t.transform.rotation.z = q_final[2];
	// t.transform.rotation.w = q_final[3];
	t.transform.translation.x = _msg->position[1];
	t.transform.translation.y = _msg->position[0];
	t.transform.translation.z = -_msg->position[2];
	t.transform.rotation.x = q_final[0];
	t.transform.rotation.y = q_final[1];
	t.transform.rotation.z = q_final[2];
	t.transform.rotation.w = q_final[3];
	// t.transform.rotation.x = (_msg->q[2] + _msg->q[3]) * sqrt(2) / 2;
	// t.transform.rotation.y = (-_msg->q[3] + _msg->q[2]) * sqrt(2) / 2;
	// t.transform.rotation.z = (-_msg->q[0] - _msg->q[1]) * sqrt(2) / 2;
	// t.transform.rotation.w = (_msg->q[1] - _msg->q[0]) * sqrt(2 / 2);

	tf_broadcaster_->sendTransform(t);

	geometry_msgs::msg::TransformStamped t_footprint;

	t_footprint.header.stamp = timestamp_; //_scan->header.stamp; // this->get_clock()->now();
	t_footprint.header.frame_id = "base_footprint";
	t_footprint.child_frame_id = "base_link";
	t_footprint.transform.translation.x = 0.0;
	t_footprint.transform.translation.y = 0.0;
	t_footprint.transform.translation.z = 0.01;
	t_footprint.transform.rotation.x = 0.0;
	t_footprint.transform.rotation.y = 0.0;
	t_footprint.transform.rotation.z = 0.0;
	t_footprint.transform.rotation.w = 1.0;

	footprint_tf_broadcaster_->sendTransform(t_footprint);

	geometry_msgs::msg::TransformStamped t_baselink;

	t_baselink.header.stamp = timestamp_; //_scan->header.stamp; // this->get_clock()->now();
	t_baselink.header.frame_id = "base_link";
	t_baselink.child_frame_id = "iwr6843_frame";
	t_baselink.transform.translation.x = 0.0;
	t_baselink.transform.translation.y = 0.0;
	t_baselink.transform.translation.z = 0.01;
	t_baselink.transform.rotation.x = q_radar[0];
	t_baselink.transform.rotation.y = q_radar[1];
	t_baselink.transform.rotation.z = q_radar[2];
	t_baselink.transform.rotation.w = q_radar[3];

	baselink_tf_broadcaster_->sendTransform(t_baselink);

	this->odom_publisher_->publish(odom_msg);
}

int main(int argc, char *argv[])
{
	std::cout << "Starting lidar_to_mmwave_converter node..." << std::endl;
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<Px4OdomTransform>());

	rclcpp::shutdown();
	return 0;
}
