cmake_minimum_required(VERSION 3.2.6)

project(example16 LANGUAGES C)

message("example16 problem solve")

add_executable(example16 main.c)

set_target_properties(example16 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
