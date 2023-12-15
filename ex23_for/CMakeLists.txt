cmake_minimum_required(VERSION 3.2.6)

project(ex23 LANGUAGES C)

message("ex23 multi for")

add_executable(ex23 multiFor.c)

set_target_properties(ex23 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)