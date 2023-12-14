#include <stdio.h>

int main() {
    int nInput = 0; // 1번째
    printf("숫자를 입력하세요 : ");
    scanf("%d", &nInput);
    if (nInput > 10) {
        printf("Before : %d\r\n", nInput);
        int nInput = 13; // 2번째
        printf("After : %d\r\n", nInput);
        if (nInput < 20) {
            printf("Before : %d\r\n", nInput);
            int nInput = 30; // 3번째
            printf("After : %d\r\n", nInput);
        }
    }
    printf("%d\r\n", nInput);
    return 0;
}