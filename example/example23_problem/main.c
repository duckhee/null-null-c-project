#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char szBuffer[12] = {"HelloWorld"};
    char *pszData = NULL;
    pszData = (char *) malloc(sizeof(char) * 12);
    memset(pszData, '\0', sizeof(char) * 12);
//	memcpy(pszData, szBuffer, 12);
    strcpy(pszData, szBuffer);
    puts(pszData);
    free(pszData);
    return 0;
}