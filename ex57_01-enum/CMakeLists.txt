cmake_minimum_required(VERSION 3.2.6)

project(ex5701EnumExample LANGUAGES C)

message("ex57-01 enum type example")

add_executable(ex5701EnumExample enumExample.c)

set_target_properties(ex5701EnumExample PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)