cmake_minimum_required(VERSION 3.2.6)

project(ex3701StackOverflow LANGUAGES C)

message("ex37-01 stack overflow")

add_executable(ex3701StackOverflow stackOverflow.c)

set_target_properties(ex3701StackOverflow PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)

# call stack size change 4MB
target_compile_options(ex3701StackOverflow PRIVATE "-Wl,-z,--stack,4194304")
#message(target)
#target_compile_options(ex3701StackOverflow PRIVATE -Wl,--stack,419304)
#set_target_properties( PROPERTIES LINK_FLAGS -Wl,--stack,16777216)