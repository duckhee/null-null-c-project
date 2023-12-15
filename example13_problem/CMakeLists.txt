cmake_minimum_required(VERSION 3.2.6)

project(Example13 LANGUAGES C)

message("example13 problem solve")

add_executable(Example13 main.c)

set_target_properties(Example13 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)