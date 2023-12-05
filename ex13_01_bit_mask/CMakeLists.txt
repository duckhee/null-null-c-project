cmake_minimum_required(VERSION 3.2.6)

project(BitMask LANGUAGES C)

message("ex13-01 bit mask")

add_executable(BitMask bitMask.c)

set_target_properties(BitMask PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)