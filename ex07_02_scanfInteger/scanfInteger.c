#include <stdio.h>

int main() {
    int x, y = 0;
    scanf("%d%d", &x, &y);
    printf("두 수의 합은 %d 입니다.\r\n", x + y);
    char ch = 0;
    printf("정수와 문자를 입력하세요 : ");
    scanf("%d%c", &x, &ch);
    printf("입력한 수는 %d이고, 문자는 %c 입니다.\r\n", x, ch);
    return 0;
}