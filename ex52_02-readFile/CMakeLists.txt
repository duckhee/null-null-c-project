cmake_minimum_required(VERSION 3.2.6)

project(ex5202ReadFileWithArray LANGUAGES C)

message("ex52-02 read file with buffer")

add_executable(ex5202ReadFileWithArray textFile.c)

set_target_properties(ex5202ReadFileWithArray PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)