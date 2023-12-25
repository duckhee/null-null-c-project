cmake_minimum_required(VERSION 3.2.6)

project(ex4201TimeUtils LANGUAGES C)

message("ex42-01 time utils")

add_executable(ex4201TimeUtils timeUtils.c)

set_target_properties(ex4201TimeUtils PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)