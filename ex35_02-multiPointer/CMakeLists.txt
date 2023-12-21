cmake_minimum_required(VERSION 3.2.6)

project(ex3502MultiPointer LANGUAGES C)

message("ex35-02 multi pointer")

add_executable(ex3502MultiPointer multiPointer.c)

set_target_properties(ex3502MultiPointer PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)