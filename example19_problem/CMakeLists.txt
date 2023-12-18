cmake_minimum_required(VERSION 3.2.6)

project(SelectSort LANGUAGES C)

message("select sort")

add_executable(SelectSort main.c)

set_target_properties(SelectSort PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
