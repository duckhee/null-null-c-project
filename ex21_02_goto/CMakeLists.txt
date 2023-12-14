cmake_minimum_required(VERSION 3.2.6)

project(ex2102Goto LANGUAGES C)

message("ex21 goto")

add_executable(ex2102Goto goto.c)

set_target_properties(ex2102Goto PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)