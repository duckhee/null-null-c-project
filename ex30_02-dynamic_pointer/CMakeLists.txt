cmake_minimum_required(VERSION 3.2.6)

project(ex3002DynamicPointer LANGUAGES C)

message("ex03-02 dynamic pointer malloc ")

add_executable(ex3002DynamicPointer dynamicPointer.c)

set_target_properties(ex3002DynamicPointer PROPERTIES C_STANDARD 99 c_STANDARD_REQUIRED ON)