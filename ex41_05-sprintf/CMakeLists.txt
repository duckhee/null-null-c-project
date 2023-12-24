cmake_minimum_required(VERSION 3.2.6)

project(ex4105Sprintf LANGUAGES C)

message("ex41-05 sprintf")

add_executable(ex4105Sprintf sprintf.c)

set_target_properties(ex4105Sprintf PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)