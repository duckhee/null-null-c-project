cmake_minimum_required(VERSION 3.2.6)

project(ex10_01_casting_change LANGUAGES C)

message("ex10 casting change")

add_executable(ex10_01_casting_change castingChange.c)

set_target_properties(ex10_01_casting_change PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)