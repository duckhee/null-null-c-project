cmake_minimum_required(VERSION 3.2.6)

project(Ex17_ifElse LANGUAGES C)

message("example17 if else")

add_executable(Ex17_ifElse ifElse.c)

set_target_properties(Ex17_ifElse PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)