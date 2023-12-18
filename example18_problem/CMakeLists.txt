
cmake_minimum_required(VERSION 3.2.6)

project(BubbleSort LANGUAGES C)

message("example18 bubble sort")

add_executable(BubbleSort main.c)

set_target_properties(BubbleSort PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)