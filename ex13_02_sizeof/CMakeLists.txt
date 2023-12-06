cmake_minimum_required(VERSION 3.2.6)

project(ex13_02_sizeOf LANGUAGES C)

message("example 13 02 sizeof")

add_executable(ex13_02_sizeOf sizeofOperator.c)

set_target_properties(ex13_02_sizeOf PROPERTIES C_STANDARD 99 c_STANDARD_REQUIRED ON)