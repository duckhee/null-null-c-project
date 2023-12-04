cmake_minimum_required(VERSION 3.2.6)

project(ex12_01_overflow LANGUAGES C)

message("ex12 01 overflow")

add_executable(ex12_01_overflow overflow.c)

set_target_properties(ex12_01_overflow PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)