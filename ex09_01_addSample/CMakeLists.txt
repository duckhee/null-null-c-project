# cmake 최소버전 설정
cmake_minimum_required(VERSION 3.2.6)

# 프로젝트 타겟 이름 정의
project(ex09AddSample LANGUAGES C)
# 메세지 출력
message("ex09 add sample")

# 실행 가능한 프로그램으로 만들기
add_executable(ex09AddSample addSample.c)
# 타겟에 대한 속성 정의
set_target_properties(ex09AddSample PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)