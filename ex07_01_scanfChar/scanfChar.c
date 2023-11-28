#include <stdio.h>
#include <stdlib.h>


int main() {
    char ch = 0;
    scanf("%c", &ch);
    // 윈도우 계열에서 보안 scanf_s("%c", &ch, 1); 을 사용해야한다.
    printf("입력한 문자는 %c 입니다.\r\n", ch);
    // char szBuffer[4] = {0};
    // scanf_s("%4c", szBuffer, _countof(szBuffer));
    // printf("%c%c%c%c\r\n", szBuffer[0], szBuffer[1], szBuffer[2], szBuffer[3]);
    return 0;
}