cmake_minimum_required(VERSION 3.2.6)

project(problemSolve LANGUAGES C)

message("problem solve12")

add_executable(problemSolve main.c)

set_target_properties(problemSolve PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)