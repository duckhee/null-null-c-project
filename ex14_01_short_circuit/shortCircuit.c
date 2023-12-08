#include <stdio.h>

int main() {
    int nAge = 0, nHeight = 0;
    printf("나이를 입력하세요 : ");
    scanf("%d", &nAge);
    printf("키를 입력하세요 : ");
    scanf("%d", &nHeight);
    printf("결과 :%d (1: 합격, 0: 불합격)\r\n", nAge >= 20 && nAge <= 30 && nHeight >= 150);
    return 0;
}