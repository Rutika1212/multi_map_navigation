from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen'
        ),
        Node(
            package='multi_map_navigation',
            executable='wormhole_db_node',
            name='wormhole_db_node',
            output='screen'
        ),
        Node(
            package='multi_map_navigation',
            executable='multi_map_navigator',
            name='multi_map_navigator',
            output='screen'
        )
    ])
