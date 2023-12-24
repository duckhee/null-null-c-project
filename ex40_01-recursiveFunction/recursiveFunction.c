#include <stdio.h>
#include <stdlib.h>

void putData(char *pszParam) {
    if (*pszParam == '\0') {
        return;
    }
    // 정 방향으로 문자열 출력
    putchar(*pszParam);
    putData(pszParam + 1);
    // 역 방향으로 문자열 출력
//    putchar(*pszParam);
}

int main(int argc, char **argv) {
    putData("testingData");
    putchar('\r\n');
    return 0;
}
