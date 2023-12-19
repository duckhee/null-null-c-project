cmake_minimum_required(VERSION 3.2.6)

project(maxValue LANGUAGES C)

message("example22 problem")

add_executable(maxValue main.c)

set_target_properties(maxValue PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)