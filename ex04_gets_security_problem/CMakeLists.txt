# cmake 의 동작 최소 버전 설정
cmake_minimum_required(VERSION 3.2.6)

# project name setting
project(ex04_01_security_problem
        LANGUAGES C)

# gcc compiler version setting
set(CMAKE_C_STANDARD 99)

# message
message("gets() over flow security problem")

add_executable(ex04_01_security_problem securityProblem.c)


