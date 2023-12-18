cmake_minimum_required(VERSION 3.2.6)

project(ex25Array LANGUAGES C)

message("ex25 array study")

add_executable(ex25Array array.c)

set_target_properties(ex25Array PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)