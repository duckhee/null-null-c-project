#include <stdio.h>
#include <string.h>

void myStrcpy(char *dst, unsigned int size, char *src);

int main(int argc, char *argv[]) {
    char szBufferSrc[12] = {"TestString"};
    char szBufferDst[12] = {0};
    myStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
    puts(szBufferDst);
    return 0;
}

void myStrcpy(char *dst, unsigned int size, char *src) {
    size_t nLenSrc = 0;
    nLenSrc = strlen(src);
    // 배열의 크기 관련 check 해야한다.
//    if (nLenSrc + 1 > bufSize) {
//
//    }
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
    }
}