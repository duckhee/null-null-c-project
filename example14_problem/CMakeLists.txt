cmake_minimum_required(VERSION 3.2.6)

project(example14 LANGUAGES C)

message("example14 problem solve")

add_executable(example14 main.c)

set_target_properties(example14 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)