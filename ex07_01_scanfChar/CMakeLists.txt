# 최소 cmake 버전 정의
cmake_minimum_required(VERSION 3.2.6)
# 프로젝트 타켓 이름 정의
project(ex07_scanfChar LANGUAGES C)

# 메세지 출력
message("ex07_scanfChar")

# 실행 파일 설정
add_executable(ex07_scanfChar scanfChar.c)

# 타겟에 대한 속성 정의
set_target_properties(ex07_scanfChar PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)