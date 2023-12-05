#include <stdio.h>

int main() {
    // 16진수 숫자 표현 방식
    int nData = 0x11223399;
    // 십진수로 데이터 출력
    printf("%d\r\n", nData);
    // AND 연산
    printf("%08X\r\n", nData & 0x00FFFF00);
    // OR 연산
    printf("%08X\r\n", nData | 0x00FFFF00);
    // XOR 연산
    printf("%08X\r\n", nData ^ 0x00FFFF00);
    // NOT 연산 -> 값을 반전 시킨다.
    printf("%08X\r\n", ~nData);
    // Shift Right 연산
    printf("%08X\r\n", nData >> 8);
    // Shift Left 연산
    printf("%08X\r\n", nData << 8);
    return 0;
}