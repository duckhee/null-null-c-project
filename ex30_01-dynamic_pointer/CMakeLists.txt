cmake_minimum_required(VERSION 3.2.6)

project(ex3001DynamicPointer LANGUAGES C)

message("ex30-01 dynamic pointer")

add_executable(ex3001DynamicPointer dynamicPointer.c)

set_target_properties(ex3001DynamicPointer PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)

