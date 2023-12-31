cmake_minimum_required(VERSION 3.2.6)

project(ex4702LinkedList LANGUAGES C)

message("ex47-02 linked list example")

add_executable(ex4702LinkedList linkedList.c)

set_target_properties(ex4702LinkedList PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)