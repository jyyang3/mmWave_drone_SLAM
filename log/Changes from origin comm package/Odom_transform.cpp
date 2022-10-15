#include <rclcpp/rclcpp.hpp>
#include <px4_msgs/msg/vehicle_odometry.hpp>
#include <nav_msgs/msg/odometry.hpp>

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


using namespace std::chrono_literals;

//creates a Px4OdomTransform class that subclasses the generic rclcpp::Node base class.
class Px4OdomTransform : public rclcpp::Node
{

//Creates a function for when messages are to be sent. 
//Messages are sent based on a timed callback.
	public:
		Px4OdomTransform() : Node("Odom_converter") {
			odom_publisher_ = this->create_publisher<nav_msgs::msg::Odometry>("/odom", 10);

			subscription_ = this->create_subscription<px4_msgs::msg::VehicleOdometry>(
			"/fmu/vehicle_odometry/out",	10,
			std::bind(&Px4OdomTransform::odom_convert, this, std::placeholders::_1));
		}

		~Px4OdomTransform() {
			RCLCPP_INFO(this->get_logger(),  "Shutting down lidar_to_mmwave_converter..");
		}


	private:
		rclcpp::TimerBase::SharedPtr timer_;
		rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_publisher_;
		rclcpp::Subscription<px4_msgs::msg::VehicleOdometry>::SharedPtr subscription_;

		//std::vector<float> objects_dist;
		//std::vector<float> objects_angl;
		void odom_convert(const px4_msgs::msg::VehicleOdometry::SharedPtr _msg);
};



// converts lidar data to pointcloud of detected objects to simulate sparse mmwave
void Px4OdomTransform::odom_convert(const px4_msgs::msg::VehicleOdometry::SharedPtr _msg){
	
	// float angle_increment = _msg->angle_increment;
	// float angle_min = _msg->angle_min;
	// float angle_max = _msg->angle_max;
	// float range_max = _msg->range_max;
	// float range_min = _msg->range_min;
	// float total_angle = angle_max - angle_min;
	// int num_of_rays = round(total_angle / angle_increment); // 1000
	
	// // get shortest dist index
	// int shortestDistIdx = 0;
	// for(int i = 0; i < num_of_rays; i++){
	// 	if(_msg->ranges[shortestDistIdx] > _msg->ranges[i]){
	// 		shortestDistIdx = i;
	// 	}
	// }

	// // group objects in lidar fov to simulate mmwave readings
	// std::vector<float> object_center_angls;
	// std::vector<float> object_center_dists;
	// int grouped_previous = 0;
	// float group_dist = 0;
	// float group_angl = 0;
	// for(int i = 0; i < num_of_rays-1; i++){
	// 	if(_msg->ranges[i] > range_min && _msg->ranges[i] < range_max){
	// 		//std::cout << "Object detected, range: " << _msg->ranges[i] << std::endl;
	// 		if(grouped_previous == 0){	
	// 			//std::cout << "First beam of object" << std::endl;
	// 			group_dist += _msg->ranges[i];
	// 			group_angl += float(i)*angle_increment - angle_max;
	// 		}
	// 		// Group object if current and next ray almost same distance
	// 		if( abs(_msg->ranges[i+1] - _msg->ranges[i]) < 0.1 ){
	// 			//std::cout << "Object more than one beam wide" << std::endl;
	// 			group_dist += _msg->ranges[i+1];
	// 			group_angl += float(i+1)*angle_increment - angle_max;
	// 			grouped_previous++;
	// 		}
	// 		else{
	// 			// add random dropout of points (~95% detection rate)
	// 			if ( ((rand() % 100) + 1) < 95){
	// 				//std::cout << "End of object detected, pushing" << std::endl;
	// 				object_center_dists.push_back( group_dist/(grouped_previous+1) );
	// 				object_center_angls.push_back( group_angl/(grouped_previous+1) );
	// 			}
	// 			grouped_previous = 0;
	// 			group_dist = 0;
	// 			group_angl = 0;
	// 		}
	// 	}
	// }
	// this->objects_angl = object_center_angls;
	// this->objects_dist = object_center_dists;
	
	// // angle compared to straight up from drone
	// float shortestDistIdxAngle = float(shortestDistIdx)*angle_increment - angle_max; 


	// // convert from "spherical" to cartesian
	// std::vector<float> pcl_x;
	// std::vector<float> pcl_y;
	// std::vector<float> pcl_z;

	// // set random seed once
	// static bool seeded = false;
	// if (seeded == false)
	// {
	// 	srand (1);
	// }
	// seeded = true;
	// // generate noise
	// float amplitude = 0.05;
	// float noise;
	// // convert to xyz (including noise)
	// for(int i = 0; i<objects_dist.size(); i++){
	// 	noise = -amplitude + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(amplitude-(-amplitude))));
	// 	pcl_x.push_back( sin(object_center_angls.at(i)) * object_center_dists.at(i) + noise*object_center_dists.at(i));
	// 	noise = -amplitude + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(amplitude-(-amplitude))));
	// 	pcl_y.push_back( sin(			0			) * object_center_dists.at(i) 	+ noise*object_center_dists.at(i));
	// 	noise = -amplitude + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(amplitude-(-amplitude))));
	// 	pcl_z.push_back( cos(object_center_angls.at(i)) * object_center_dists.at(i) + noise*object_center_dists.at(i));
	// }

	// // create PointCloud2 msg
	// //https://github.com/ros-drivers/velodyne/blob/master/velodyne_laserscan/tests/system.cpp
	auto odom_msg = nav_msgs::msg::Odometry();
	odom_msg.header = std_msgs::msg::Header();
	odom_msg.header.stamp = this->now();
	std::string frameID = "odom";
	std::string childID = "base_link";
	odom_msg.header.frame_id = frameID;
	odom_msg.child_frame_id = childID;
	odom_msg.pose.pose.position.x=_msg->position[1];
	odom_msg.pose.pose.position.y=_msg->position[0];
	odom_msg.pose.pose.position.z=-_msg->position[2];
	odom_msg.pose.pose.orientation.x=_msg->q[1];
	odom_msg.pose.pose.orientation.y=_msg->q[0];
	odom_msg.pose.pose.orientation.z=-_msg->q[2];
	odom_msg.pose.pose.orientation.w=_msg->q[3];
	odom_msg.pose.covariance={1.0,0.0,0.0,0.0,0.0,0.0,
								0.0,1.0,0.0,0.0,0.0,0.0,
								0.0,0.0,1.0,0.0,0.0,0.0,
								0.0,0.0,0.0,1.0,0.0,0.0,
								0.0,0.0,0.0,0.0,1.0,0.0,
								0.0,0.0,0.0,0.0,0.0,1.0};;
	odom_msg.twist.twist.linear.x=_msg->velocity[1];
	odom_msg.twist.twist.linear.y=_msg->velocity[0];
	odom_msg.twist.twist.linear.z=_msg->velocity[2];
	odom_msg.twist.twist.angular.x=0.0;
	odom_msg.twist.twist.angular.y=0.0;
	odom_msg.twist.twist.angular.z=-_msg->angular_velocity[2];
	odom_msg.twist.covariance={1.0,0.0,0.0,0.0,0.0,0.0,
								0.0,1.0,0.0,0.0,0.0,0.0,
								0.0,0.0,1.0,0.0,0.0,0.0,
								0.0,0.0,0.0,1.0,0.0,0.0,
								0.0,0.0,0.0,0.0,1.0,0.0,
								0.0,0.0,0.0,0.0,0.0,1.0};	
	// pcl2_msg.fields.resize(3);
	// pcl2_msg.fields[0].name = 'x';
	// pcl2_msg.fields[0].offset = 0;
	// pcl2_msg.fields[0].datatype = sensor_msgs::msg::PointField::FLOAT32;
	// pcl2_msg.fields[0].count = 1;
	// pcl2_msg.fields[1].name = 'y';
	// pcl2_msg.fields[1].offset = 4;
	// pcl2_msg.fields[1].datatype = sensor_msgs::msg::PointField::FLOAT32;
	// pcl2_msg.fields[1].count = 1;
	// pcl2_msg.fields[2].name = 'z';
	// pcl2_msg.fields[2].offset = 8;
	// pcl2_msg.fields[2].datatype = sensor_msgs::msg::PointField::FLOAT32;
	// pcl2_msg.fields[2].count = 1;
	// const uint32_t POINT_STEP = 12;
	// if(objects_dist.size() > 0){
	// 	pcl2_msg.data.resize(std::max((size_t)1, objects_dist.size()) * POINT_STEP, 0x00);
	// }
	// pcl2_msg.point_step = POINT_STEP; // size (bytes) of 1 point (float32 * dimensions (3 when xyz))
	// pcl2_msg.row_step = pcl2_msg.data.size();//pcl2_msg.point_step * pcl2_msg.width; // only 1 row because unordered
	// pcl2_msg.height = 1;  // because unordered cloud
	// pcl2_msg.width = pcl2_msg.row_step / POINT_STEP; // number of points in cloud
	// pcl2_msg.is_dense = false; // there may be invalid points

	// // fill PointCloud2 msg data
	// if(objects_dist.size() > 0){
	// 	uint8_t *ptr = pcl2_msg.data.data();
	// 	for (size_t i = 0; i < objects_dist.size(); i++)
	// 	{
	// 		*(reinterpret_cast<float*>(ptr + 0)) = pcl_x.at(i);
	// 		*(reinterpret_cast<float*>(ptr + 4)) = pcl_y.at(i);
	// 		*(reinterpret_cast<float*>(ptr + 8)) = pcl_z.at(i);
	// 		ptr += POINT_STEP;
	// 	}
	// } 
	// publish PointCloud2 msg
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
