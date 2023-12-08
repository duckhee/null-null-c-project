cmake_minimum_required(VERSION 3.2.6)

project(Example08 LANGUAGES C)

message("example08 최대 값 라이벌")

add_executable(Example08 main.c)

set_target_properties(Example08 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)