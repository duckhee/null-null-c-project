cmake_minimum_required(VERSION 3.2.6)

project(ex3103MemCopy LANGUAGES C)

message("ex31-03 pointer")

add_executable(ex3103MemCopy memcopy.c)

set_target_properties(ex3103MemCopy PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)