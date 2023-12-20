#include <stdio.h>

int main() {
    int inputA = 0, inputB = 0, inputC = 0;
    printf("숫자를 세개 입력하세요 : ");
    scanf("%d%d%d", &inputA, &inputB, &inputC);

    printf("MAX : %d\r\n",
           (inputA > inputB) ? ((inputA > inputC) ? inputA : inputC) : ((inputB > inputC) ? inputB : inputC));
    return 0;
}