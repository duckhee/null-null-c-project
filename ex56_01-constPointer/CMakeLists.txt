cmake_minimum_required(VERSION 3.2.6)

project(ex5601ConstPointer LANGUAGES C)

message("ex56-01 const symbolic pointer variable")

add_executable(ex5601ConstPointer constPointer.c)

set_target_properties(ex5601ConstPointer PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
