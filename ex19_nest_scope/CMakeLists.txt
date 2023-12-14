cmake_minimum_required(VERSION 3.2.6)

project(ex19_nestScope LANGUAGES C)

message("ex19 nest scope")

add_executable(ex19_nestScope nestScope.c)

set_target_properties(ex19_nestScope PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
