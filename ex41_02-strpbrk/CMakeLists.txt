cmake_minimum_required(VERSION 3.2.6)

project(ex4102Strpbrk LANGUAGES C)

message("ex41-01 strpbrk")

add_executable(ex4102Strpbrk strpbrk.c)

set_target_properties(ex4102Strpbrk PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)