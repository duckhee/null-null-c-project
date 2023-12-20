cmake_minimum_required(VERSION 3.2.6)

project(pointerMemorySolve LANGUAGES C)

message("example23 problem solve")

add_executable(pointerMemorySolve main.c)

set_target_properties(pointerMemorySolve PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)