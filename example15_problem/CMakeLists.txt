cmake_minimum_required(VERSION 3.2.6)

project(example15 LANGUAGES C)

message("example15 problem solve")

add_executable(example15 main.c)

set_target_properties(example15 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
