#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    // directory 와 folder 는 같은 것이다.
    // folder는 전형적인 비선형 자료 구조라고 이야기한다.
    // 윈도우는 file system 이 NTFS로 관리를 한다. -> 대략 511KB 정도까지 관리가 가능하다.
    char szPath[128] = {"C:\\Program file\\"};
    char szBuffer[128] = {0};
    printf("Input path : ");
    fgets(szBuffer, sizeof(szBuffer), stdin);
    strcat(szPath, szBuffer);
    puts(szPath);
    return 0;
}