#include <stdio.h>
#include <fcntl.h>


int main() {
    FILE *fp = NULL;
    fp = fopen("Test.dat", "rb");

    if (fp == NULL) {
        printf("file open error\r\n");
        return 0;
    }
    // 파일의 끝 부분으로 팡리 포인터를 옮기는 함수 -> binary 모드로 열어야만 사용이 가능하다.
    fseek(fp, 0, SEEK_END);
    // 현재 파일 포인터의 위치를 출력
    printf("size of Test.dat : %u\r\n", ftell(fp));
    fclose(fp);
    return 0;
}
