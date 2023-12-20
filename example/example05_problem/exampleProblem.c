#include <stdio.h>

int main() {
    int nInput = 0;
    int nResult = 0;
    printf("첫번째 정수를 입력하세요 : ");
    scanf("%d", &nInput);
//    scanf_s("%d", &nInput);
    nResult = nInput;
    printf("두번째 정수를 입력하세요 : ");
    scanf("%d", &nInput);
//    scanf_s("%d", &nInput);
    nResult += nInput;
    printf("세번째 정수를 입력하세요 : ");
    scanf("%d", &nInput);
//    scanf_s("%d", &nInput);
    nResult += nInput;
    printf("total : %d\r\n", nResult);
    return 0;
}