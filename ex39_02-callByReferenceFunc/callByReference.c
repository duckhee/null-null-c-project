#include <stdio.h>
#include <stdlib.h>

void getName(char *pName, int size) {
    printf("input your name : ");
    // linux style scanf_s
    fgets(pName, size, stdin);
    // window using scanf_s
    // scanf_s(pName, bufSize);
}

int main(int argc, char **argv) {
    char szName[32] = {0};
    getName(szName, sizeof szName);
    printf("your name is %s\r\n", szName);
    return 0;
}
