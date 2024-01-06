#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    char ch;
    fp = fopen("text.txt", "w");
    // fopen_s(&fp, "text.txt", "w);
    fputs("Test String!", fp);
    fclose(fp);

    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("file open error \r\n");
        return 0;
    }
    // 파일의 마지막 까지 읽어서 console에 출력 하는 반복문
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
