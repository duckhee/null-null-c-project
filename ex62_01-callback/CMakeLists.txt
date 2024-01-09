cmake_minimum_required(VERSION 3.2.6)

project(ex6201CallBack LANGUAGES C)

message("ex62-01 call back")

add_executable(ex6201CallBack callBack.c)

set_target_properties(ex6201CallBack PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)