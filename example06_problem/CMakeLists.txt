cmake_minimum_required(VERSION 3.2.6)

project(Example06 LANGUAGES C)

message("example06 problem")

add_executable(Example06 main.c)

set_target_properties(Example06 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)