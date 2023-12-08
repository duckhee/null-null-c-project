cmake_minimum_required(VERSION 3.2.6)

project(TernaryOperator LANGUAGES C)

message("ex15-01 TernaryOperator")


# 컴파일러에 따른 컴파일 옵션 설정
# MSVC 는 마이크로 소프트의 컴파일러를 의미한다.
if(MSVC)
    add_compile_options(/W3 /WX)
else()
    add_compile_options(-Wall -Werror)
endif()


add_executable(TernaryOperator ternaryOperator.c)

set_target_properties(TernaryOperator PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)