#include <stdio.h>

int main() {
    int nInput = 0, nMax = 0;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &nInput);
    nMax = nInput;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &nInput);
    (nInput > nMax) ? (nMax = nInput) : nMax;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &nInput);
    (nInput > nMax) ? (nMax = nInput) : nMax;
    printf("MAX : %d\r\n", nMax);

    return 0;
}