#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char szBuffer[128] = {0};
    char szSet[128] = {0};
    char *pszStart = szBuffer;
    printf("Input string : ");
    fgets(szBuffer, sizeof(szBuffer), stdin);
    printf("Input character set : ");
    fgets(szSet, sizeof(szSet), stdin);
    //
    while ((pszStart = strpbrk(pszStart, szSet)) != NULL) {
        printf("[%p] Index : %ld, %c\r\n", pszStart, (pszStart - szBuffer), *pszStart);
        // 인덱스를 찾은 주소 값보다 1 증가 시켜서 다음에 해당되는 문자열을 찾을 수 있게 해준다. 
        pszStart++;
    }
    return 0;
}