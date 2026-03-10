cmake_minimum_required(VERSION 3.10)

project(AutonomousRobotNavigator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(robot_nav
    src/main.cpp
    src/GridMap.cpp
)