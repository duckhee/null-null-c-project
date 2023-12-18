cmake_minimum_required(VERSION 3.2.6)

project(ex27LookUp LANGUAGES C)

message("ex27 look up array")

add_executable(ex27LookUp lookUpArray.c)

set_target_properties(ex27LookUp PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)