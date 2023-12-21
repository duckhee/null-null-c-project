cmake_minimum_required(VERSION 3.2.6)

project(ex3301String LANGUAGES C)

message("ex33-01 string copy, compare, search")

add_executable(ex3301String stringCopyCompSearch.c)

set_target_properties(ex3301String PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)