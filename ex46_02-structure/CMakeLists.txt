cmake_minimum_required(VERSION 3.2.6)

project(ex4602Structure LANGUAGES C)

message("ex46-02 structure")

add_executable(ex4602Structure struct.c)

set_target_properties(ex4602Structure PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)