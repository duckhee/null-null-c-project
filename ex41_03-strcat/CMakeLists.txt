cmake_minimum_required(VERSION 3.2.6)

project(ex4103Strcat LANGUAGES C)

message("ex41-03 strcat")

add_executable(ex4103Strcat strcat.c)

set_target_properties(ex4103Strcat PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)