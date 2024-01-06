cmake_minimum_required(VERSION 3.2.6)

project(ex5501FSeek LANGUAGES C)

message("ex55-01 file pointer position seek fseek")

add_executable(ex5501FSeek fSeek.c)

set_target_properties(ex5501FSeek PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)