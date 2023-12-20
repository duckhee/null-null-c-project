cmake_minimum_required(VERSION 3.2.6)

project(example20 LANGUAGES C)

message("example20 solve multi dimensional array")

add_executable( example20 main.c)

set_target_properties(example20 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)