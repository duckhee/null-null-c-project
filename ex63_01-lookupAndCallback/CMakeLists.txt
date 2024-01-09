cmake_minimum_required(VERSION 3.2.6)

project(ex6301LookupAndCallback LANGUAGES C)

message("ex63-01 lookup table and callback")

add_executable(ex6301LookupAndCallback lookupTableAndCallback.c)

set_target_properties(ex6301LookupAndCallback PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)