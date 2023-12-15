cmake_minimum_required(VERSION 3.2.6)

project(ex22While LANGUAGES C)

message("ex22 while")

add_executable(ex22While ex22While.c)

set_target_properties(ex22While PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)