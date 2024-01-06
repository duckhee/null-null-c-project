cmake_minimum_required(VERSION 3.2.6)

project(ex5201TextFileHandle LANGUAGES C)

message("ex52-01 text file handle")

add_executable(ex5201TextFileHandle textFileHandle.c)

set_target_properties(ex5201TextFileHandle PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)