cmake_minimum_required(VERSION 3.2.6)

project(example24 LANGUAGES C)

message("example24 problem solve ")

add_executable(example24 main.c)

set_target_properties(example24 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)