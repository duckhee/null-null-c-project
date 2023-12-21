cmake_minimum_required(VERSION 3.2.6)

project(ex3201ArrayPointer LANGUAGES C)

message("ex32-01 array and pointer")

add_executable(ex3201ArrayPointer pointerArray.c)

set_target_properties(ex3201ArrayPointer PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)