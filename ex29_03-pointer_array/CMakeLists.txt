cmake_minimum_required(VERSION 3.2.6)

project(ex2903PointerArray LANGUAGES C)

message("ex29-03 pointer array")

add_executable(ex2903PointerArray pointerArray.c)

set_target_properties(ex2903PointerArray PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)