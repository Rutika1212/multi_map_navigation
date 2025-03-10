from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.substitutions import FindPackageShare
from launch.actions import DeclareLaunchArgument
import os

def generate_launch_description():
    pkg_share = FindPackageShare('multi_map_navigation').find('multi_map_navigation')
    map_dir = os.path.join(pkg_share, 'maps')
    
    # Define launch arguments
    initial_map = LaunchConfiguration('initial_map')
    initial_map_arg = DeclareLaunchArgument(
        'initial_map',
        default_value='hall',
        description='Initial map to load')
    
    # Map server node
    map_server_node = Node(
        package='multi_map_navigation',
        executable='map_server_node',
        name='map_server_node',
        output='screen',
        parameters=[{
            'map_directory': map_dir,
            'known_maps': ['hall', 'room1'],
            'initial_map': initial_map
        }]
    )
    
    # Wormhole database node
    wormhole_db_node = Node(
        package='multi_map_navigation',
        executable='wormhole_db_node',
        name='wormhole_db_node',
        output='screen',
        parameters=[{
            'database_path': os.path.join(pkg_share, 'wormhole_db.sqlite')
        }]
    )
    
    # Multi-map navigator node
    navigator_node = Node(
        package='multi_map_navigation',
        executable='multi_map_navigator',
        name='multi_map_navigator',
        output='screen',
        parameters=[{
            'initial_map': initial_map
        }]
    )
    
    # AMCL for localization
    amcl_node = Node(
        package='nav2_amcl',
        executable='amcl',
        name='amcl',
        output='screen',
        parameters=[{
            'use_sim_time': True,
            'alpha1': 0.2,
            'alpha2': 0.2,
            'alpha3': 0.2,
            'alpha4': 0.2,
            'alpha5': 0.2,
            'base_frame_id': 'base_footprint',
            'global_frame_id': 'map',
            'always_reset_initial_pose': True
        }]
    )
    
    # RViz node
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', os.path.join(pkg_share, 'rviz', 'multi_map_navigation.rviz')]
    )
    
    # Include Nav2 launch file
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            FindPackageShare('nav2_bringup').find('nav2_bringup'),
            '/launch/navigation_launch.py'
        ]),
        launch_arguments={
            'use_sim_time': 'true',
            'params_file': os.path.join(pkg_share, 'config', 'nav2_params.yaml')
        }.items()
    )

    
    
    return LaunchDescription([
        initial_map_arg,
        map_server_node,
        wormhole_db_node,
        navigator_node,
        amcl_node,
        nav2_launch,
        rviz_node
    ])