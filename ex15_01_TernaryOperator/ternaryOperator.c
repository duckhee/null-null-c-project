#include <stdio.h>

int main() {
    int nInput = 0, nSelect = 0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &nInput);
    // 삼항 연산
    nSelect = (nInput <= 10) ? 10 : 20;
    printf("nSelect : %d\r\n", nSelect);
    return 0;
}