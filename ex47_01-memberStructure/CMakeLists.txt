cmake_minimum_required(VERSION 3.2.6)

project(ex4701MemberStructure LANGUAGES C)

message("ex47-01 member structure")

add_executable(ex4701MemberStructure memberStructure.c)

set_target_properties(ex4701MemberStructure PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)