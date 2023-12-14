#include <stdio.h>

int main() {
    int x = 0, y = 0, nResult = 0;
    char operator = '\0';
    scanf("%d%c%d", &x, &operator, &y);
    // 식이 들어갈 수 있지만, switch() 안에는 정수의 결과가 나오는 식 또는 정수 값이 들어가야한다.
    switch (operator) {
        case '+':
            nResult = x + y;
            break;
        case '-':
            nResult = x - y;
            break;
        case '*':
            nResult = x * y;
            break;
        case '/':
            nResult = x / y;
            break;
        default:
            puts("ERROR: 알 수 없는 산술 연산 입니다.\r\n");
    }
    printf("Result : %d\r\n", nResult);
    return 0;
}