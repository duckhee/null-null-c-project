cmake_minimum_required(VERSION 3.2.6)

project(ex5301BufferedIO LANGUAGES C)

message("ex53-01 buffered IO track")

add_executable(ex5301BufferedIO bufferedIO.c)

set_target_properties(ex5301BufferedIO PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)