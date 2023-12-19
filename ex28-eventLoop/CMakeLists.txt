cmake_minimum_required(VERSION 3.2.6)

project(ex28EventLoop LANGUAGES C)

message("ex28 event loop")

add_executable(ex28EventLoop eventLoop.c)

set_target_properties(ex28EventLoop PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)

#include(ex28EventLoop ncurses.h)
# gui 만들 때 사용되는 라이브러리
target_link_libraries(ex28EventLoop LINK_PRIVATE ncurses)