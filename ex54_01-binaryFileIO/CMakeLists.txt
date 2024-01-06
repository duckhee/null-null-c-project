cmake_minimum_required(VERSION 3.2.6)

project(ex5401BinaryFileIO LANGUAGES C)

message("ex54-01 binary file io")

add_executable(ex5401BinaryFileIO binaryFileIO.c)

set_target_properties(ex5401BinaryFileIO PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)