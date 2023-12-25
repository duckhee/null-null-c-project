cmake_minimum_required(VERSION 3.2.6)

project(systemUtils LANGUAGES C)

message("ex44-01 system utils")

add_executable(systemUtils systemUtils.c)

set_target_properties(systemUtils PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)