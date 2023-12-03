cmake_minimum_required(VERSION 3.2.6)

project(ex11_01_AssignErrorSample)

message("ex11 01 assign error sample")

add_executable(ex11_01_AssignErrorSample assignErrorSample.c)

set_target_properties(ex11_01_AssignErrorSample PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)