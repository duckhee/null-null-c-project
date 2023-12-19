#include <stdio.h>

int getValue();

int getMaxValue(int, int, int);

int main() {
    int nA = 0, nB = 0, nC = 0;
    int nResult = 0;
//    printf("정수 세개를 입력하세요 : ");
//    scanf("%d%d%d", &nA, &nB, &nC);
    nA = getValue();
    nB = getValue();
    nC = getValue();
    nResult = getMaxValue(nA, nB, nC);
    printf("max value : %d\r\n", nResult);
    return 0;
}

int getValue() {
    int nInput = 0;
    printf("정수를 입력하세요 : ");
    scanf("%d", &nInput);
    return nInput;
}

int getMaxValue(int a, int b, int c) {
    int maxValue = a;
    if (b > maxValue) maxValue = b;
    if (c > maxValue) maxValue = c;

    return maxValue;
}