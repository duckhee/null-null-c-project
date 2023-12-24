#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char szBuffer[128] = {"nData = x + y;\nnResult = a * b"};
    char *pszSep = " *+=;\n";
    char *pszToken = NULL;
    char *pszNextToken = NULL;
    printf("original : %s\r\n", szBuffer);
    // 문자열의 데이터를 자르기 -> 해당되는 seperator 위치에 null값을 넣어준다.
    pszToken = strtok_r(szBuffer, pszSep, &pszNextToken);
    printf("first split : %s\r\n", szBuffer);
    printf("psz Token: %s\r\n", pszToken);
    while (pszToken != NULL) {
        printf("psz Token: %s\r\n", pszToken);
        printf("pszNextToken %s\r\n", pszNextToken);
        printf("split szBuffer : %s\r\n", szBuffer);
        pszToken = strtok_r(NULL, pszSep, &pszNextToken);    //널문자를 기준으로 다시 자르기

    }

    printf("\r\nszBuffer : %s\r\n", szBuffer);
    return 0;
}