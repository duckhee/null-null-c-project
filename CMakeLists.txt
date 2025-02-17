# CMake 최소 버전 설정
cmake_minimum_required(VERSION 3.2.6)

# 프로젝트에 대한 설정 -> 프로젝트 이름 정의 및 언어 설정 C
project(nullnull_c_project LANGUAGES C)
# CMake 의 C 버전을 전역으로 설정 하는 것
#set(CMAKE_C_STANDARD 99)

# add sub directory
add_subdirectory(ex01_helloworld)
add_subdirectory(ex02_getchar_sample)
add_subdirectory(ex03_gets_sample)
add_subdirectory(ex04_gets_security_problem)
add_subdirectory(ex05_escSeq)
add_subdirectory(ex05_format)
add_subdirectory(ex06_float_print)
add_subdirectory(ex06_01_float_format2)
add_subdirectory(ex07_01_scanfChar)
add_subdirectory(ex07_02_scanfInteger)
add_subdirectory(ex07_03_scanfAge)
add_subdirectory(ex08_scanf_string)

add_subdirectory(ex09_01_addSample)
add_subdirectory(ex09_02_modSample)
add_subdirectory(ex10_01_casting_change)
add_subdirectory(ex10_02_divisionZero)

add_subdirectory(ex11_01_assignErrorSample)

add_subdirectory(ex12_01_overflow)
add_subdirectory(ex12_02_conditional_operator)
add_subdirectory(ex13_01_bit_mask)

add_subdirectory(ex13_02_sizeof)
add_subdirectory(ex14_01_short_circuit)
add_subdirectory(ex14_02_wrong_condition)
add_subdirectory(ex15_01_TernaryOperator)

add_subdirectory(ex16_01_if)

add_subdirectory(ex17_01_if_else)

add_subdirectory(ex18_multi_if)
add_subdirectory(ex19_nest_scope)
add_subdirectory(ex20_switch_case)
add_subdirectory(ex21_goto)
add_subdirectory(ex21_02_goto)
add_subdirectory(ex22_while)

add_subdirectory(ex23_for)

add_subdirectory(ex24_break_and_continue)
add_subdirectory(ex25_array)

add_subdirectory(ex26_multi-dimensionalArray)

add_subdirectory(ex27-lookupArray)

add_subdirectory(ex28-eventLoop)
add_subdirectory(ex29_01-pointer_simple)
add_subdirectory(ex29_02-pointer_array)
add_subdirectory(ex29_03-pointer_array)
add_subdirectory(ex30_01-dynamic_pointer)
add_subdirectory(ex30_02-dynamic_pointer)
add_subdirectory(ex31_01-pointer-dynamicArray)
add_subdirectory(ex31_02-pointer-dynamicArray)
add_subdirectory(ex31_03-memcopy)

add_subdirectory(ex32_01-array-pointer)
add_subdirectory(ex32_02-pointerArray)
add_subdirectory(ex33_01-stringCopyCompSearch)
add_subdirectory(ex34_01-realloc)
add_subdirectory(ex35_01-multiPointer)
add_subdirectory(ex35_02-multiPointer)
add_subdirectory(ex36_01-multiDimensionArrayPointer)
add_subdirectory(ex37_01-stackOverflow)
add_subdirectory(ex38_01-stackFrameAndLocalVariable)
add_subdirectory(ex39_01-callbyReference)
add_subdirectory(ex39_02-callByReferenceFunc)
add_subdirectory(ex39_03-callByReference)
add_subdirectory(ex40_01-recursiveFunction)
add_subdirectory(ex41_01-strtok)
add_subdirectory(ex41_02-strpbrk)
add_subdirectory(ex41_03-strcat)
add_subdirectory(ex41_04-strcat)
add_subdirectory(ex41_05-sprintf)
add_subdirectory(ex42_01-timeUtil)
add_subdirectory(ex43_01-rand)
add_subdirectory(ex44_01-systemUtils)
add_subdirectory(ex45_01-struct)
add_subdirectory(ex46_01-structure)
add_subdirectory(ex46_02-structure)
add_subdirectory(ex47_01-memberStructure)
add_subdirectory(ex47_02-linkedList)
add_subdirectory(ex48_01-bitField)
add_subdirectory(ex49_01-union)
add_subdirectory(ex50_01-structureFit)

add_subdirectory(ex51_01-file)
add_subdirectory(ex52_01-textFileHandle)
add_subdirectory(ex52_02-readFile)

add_subdirectory(ex53_01-IObuffer)
add_subdirectory(ex54_01-binaryFileIO)

add_subdirectory(ex55_01-fseek)
add_subdirectory(ex56_01-constPointer)
add_subdirectory(ex57_01-enum)
add_subdirectory(ex58_01-extern)

add_subdirectory(ex59_01-macro)
add_subdirectory(ex59_02-macro)

add_subdirectory(ex60_01-conditionCompile)

add_subdirectory(ex61_01-functionPointer)
add_subdirectory(ex62_01-callback)
add_subdirectory(ex63_01-lookupAndCallback)
add_subdirectory(example)

# 프로젝트를 실행 가능한 파일로 설정 및 소스 추가
add_executable(nullnull_c_project main.c)
# cmake c version setting
set_target_properties(nullnull_c_project PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
