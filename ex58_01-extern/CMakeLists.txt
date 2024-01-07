cmake_minimum_required(VERSION 3.2.6)

project(ex5801ExternKeyword LANGUAGES C)

add_library(counter STATIC counter.h counter.c)

message("ex58-01 extern keyword")

add_executable(ex5801ExternKeyword externKeyword.c)

target_link_libraries(ex5801ExternKeyword PRIVATE counter)

set_target_properties(ex5801ExternKeyword PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)