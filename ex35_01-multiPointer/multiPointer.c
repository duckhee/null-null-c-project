#include <stdio.h>

int main() {
    char ch = 'A';
    char *pData = &ch;
    char **ppData = &pData;
    char ***pppData = &ppData;

    printf("ch : %c\r\n", ch);
    printf("single pointer : %c\r\n", *pData);
    printf("double pointer : %c\r\n", **ppData);
    printf("triple pointer : %c\r\n", ***pppData);
    return 0;
}