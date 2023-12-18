cmake_minimum_required(VERSION 3.2.6)

project(Example17Array LANGUAGES C)

message("example 17 array")


add_executable(Example17Array main.c)

set_target_properties(Example17Array PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)