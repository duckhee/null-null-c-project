cmake_minimum_required(VERSION 3.2.6)

project(wrongConditional LANGUAGES C)

message("ex14-02 wrong conditional")

add_executable(wrongConditional wrongConditional.c)

set_target_properties(wrongConditional PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
