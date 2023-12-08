#include <stdio.h>

int main() {
    int nInput = 0, nResult = 0;
    printf("숫자를 입력 하세요 : ");
    scanf("%d", &nInput);
    // 잘못된 표현이다.
    // -> 이 표현의 경우 왼쪽의 조건을 비교하여 0, 1이 나온다. 그 결과를 가지고 다시 오른쪽에 있는 조건을 비교하므로 논리적 오류를 범한다.
    nResult = 3 < nInput < 20;
    // 이와 같이 표현하는 것이 올바른 조건이다.
    nResult = (3 < nInput) && (nResult < 20);
    printf("Result : %d (1: True, 0: False)", nResult);
    return 0;
}