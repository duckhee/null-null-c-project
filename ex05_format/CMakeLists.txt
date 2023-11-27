# cmake 의 최소 버전 설정
cmake_minimum_required(VERSION 3.2.6)
# target project 정의
project(ex05_formatter
        LANGUAGES C)
# target 에 대한 속성 정의
#set(CMAKE_C_STANDARD 99)
#set(CMAKE_C_STANDARD_REQUIRED TRUE)


#set_target_properties(ex05_formatter PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)

# message
message("ex05 c language print formatter")

add_executable(ex05_formatter printfFormat.c)
# target 에 대한 속성 정의
set_target_properties(ex05_formatter PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)