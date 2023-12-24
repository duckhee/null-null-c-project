cmake_minimum_required(VERSION 3.2.6)

project(ex3901callByReference LANGUAGES C)

message("ex39-01 call by reference example")

add_executable(ex3901callByReference callByReference.c)

set_target_properties(ex3901callByReference PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
