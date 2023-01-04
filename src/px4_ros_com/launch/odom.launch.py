#!/usr/bin/env python

from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
import launch_ros.actions
import os
from launch_ros.actions import Node

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    return LaunchDescription([
        Node(
            package='px4_ros_com',
            #namespace='px4_ros_com',
            executable='Odom_transform',
            name='sim'
        )
    ])

