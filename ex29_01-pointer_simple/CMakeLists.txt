cmake_minimum_required(VERSION 3.2.6)

project(ex29Pointer LANGUAGES C)

message("ex29 pointer simple study")

add_executable(ex29Pointer pointerSimple.c)

set_target_properties(ex29Pointer PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)