#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {
    FILE *fp = NULL;
    char szBuffer[512] = {0};
    bzero(szBuffer, 512);
    // CON 이라는 것은 장치 파일이다
    fp = fopen("Text.txt", "w");
    fputs("Text\r\n", fp);
    fputs("String\r\n", fp);
    fputs("Data\r\n", fp);
    fclose(fp);

    fp = fopen("Text.txt", "r");
    if (fp == NULL) {
        printf("file open failed\r\n");
        return 0;
    }
    while (fgets(szBuffer, sizeof(szBuffer), fp)) {
        printf("read data : %s", szBuffer);
        memset(szBuffer, 0, sizeof(szBuffer));
    }
    fclose(fp);
    return 0;
}