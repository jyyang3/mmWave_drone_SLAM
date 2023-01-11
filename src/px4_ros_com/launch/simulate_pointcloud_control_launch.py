from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='iwr6843_pub-main',
            #namespace='turtlesim1',
            executable='iwr6843_pub',
            name='iwr6843_pub'
        ),
        Node(
            package='px4_ros_com',
            #namespace='turtlesim2',
            executable='Odom_transform_real',
            name='Odom_transform_real'
        ),
        Node(
            package='px4_ros_com',
            #namespace='turtlesim2',
            executable='lidar_to_mmwave',
            name='lidar_to_mmwave'
        )
    ])
