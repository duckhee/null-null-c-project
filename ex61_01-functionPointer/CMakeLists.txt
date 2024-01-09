cmake_minimum_required(VERSION 3.2.6)

project(ex6101FunctionPointer LANGUAGES C)

message("ex61-01 function pointer")

add_executable(ex6101FunctionPointer functionPointer.c)

set_target_properties(ex6101FunctionPointer PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)