#include <stdio.h>

int main() {
    int nResult = 0, nInput = 0;
    printf("숫자를 입력하시오 : ");
    scanf("%d", &nInput);
    nResult = nInput;
    printf("숫자를 입력하시오 : ");
    scanf("%d", &nInput);
    if (nResult < nInput) {
        nResult = nInput;
    }
    printf("숫자를 입력하시오 : ");
    scanf("%d", &nInput);
    if (nResult < nInput) {
        nResult = nInput;
    }
    printf("MAX : %d\r\n", nResult);
    return 0;
}