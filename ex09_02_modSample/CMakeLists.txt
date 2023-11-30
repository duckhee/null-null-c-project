cmake_minimum_required(VERSION 3.2.6)

project(ex09_modSample LANGUAGES C)

message("ex09-02 mod sample")

add_executable(ex09_modSample modSample.c)

set_target_properties(ex09_modSample PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)