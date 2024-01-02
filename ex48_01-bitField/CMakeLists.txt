cmake_minimum_required(VERSION 3.2.6)

project(ex4801BitField LANGUAGES C)

message("ex48-01 bit field")

add_executable(ex4801BitField bitField.c)

set_target_properties(ex4801BitField PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)