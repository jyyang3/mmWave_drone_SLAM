Drone odometry is partially working but there exist time sync problems.

Ti radar transform is working.

2d Cartographer SLAM using lidar is working, but it requires a sufficient number of features.

Oct25: time sync problem is solved, tf broadcaster is publishing tf using the timestamp of scan data. 2d cartographer for drone in outdoor environment is working.

The packages works with ubuntu 20.04 and ros2 foxy.

Nodes description:
1.PX4-msgs:setup could be found here: https://github.com/nhma20/mmWave_ROS2_PX4_Gazebo. Users should update uorb message definition using commands below:(PX4-Autopilot is the folder name for your PX4 firmware):
cd ~/PX4-Autopilot/msg/tools/
./uorb_to_ros_msgs.py ~/PX4-Autopilot/msg/ ~/px4_ros_com_ros2/src/px4_msgs/msg/

2.px4_ros_com: setup could be found here: https://github.com/nhma20/mmWave_ROS2_PX4_Gazebo, added several nodes for offboard control and tf publication.

3.mmwave_drone_cartographer:Cartographer configuration for drone SLAM. Requires ros packages ros-foxy-cartographer and ros-foxy-cartographer-ros.

4.mmwave_drone_navigation2:Navigation2 configuration for drone navigation. Requires ros packages ros-foxy-cartographer and ros-foxy-cartographer-ros.

5.nav_goals:node for automatically send navigation goals to navigation2

6.iwr6843_pub:radar pointcloud publisher, run when using real mmWave radars. Derived from: https://github.com/nhma20/iwr6843aop_pub.


command referance:
run micrortps agent:micrortps -d UDP(Using SITL)/micrortps -t /dev/ttyUSB0(Using real hardware)

run tf publisher and odom publisher:(Requires micrortps agent, Prerequisite for drone SLAM or drone navigation node)
ros2 run px4_ros_com Odom_transform 

run SLAM: ros2 launch mmwave_drone_cartographer cartographer.launch.py

run Navigation2:ros2 launch mmwave_drone_navigation2 navigation2.launch.py

run offboard control:ros2 run px4_ros_com offboard_control(use for move the drone based on vel commands from nav2)

run radar pointcloud publisher: ros2 run iwr6843_pub pcl_pub(the frame for pointcloud2 topic is iwr6843_frame)

give navigation2 goals:ros2 run nav_goals navigator

