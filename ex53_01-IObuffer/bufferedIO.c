#include <stdio.h>

// window 에서만 제대로 나온다
// window 에서는 관리하는 단위가 page 이다. page 단위는 4KB(4096Byte)로 되어 있다.
typedef struct _IO_Buffer {
    char *pCur;
    char *pBase;
    int bufSize;
} IO_Buffer;

// window 에서 확인 하기 위한 함수
void printBufferIo(IO_Buffer *_ioBuffer) {
    printf("pointer Base Addr : %p\r\n", _ioBuffer->pBase);
    printf("pointer current : %p\r\n", _ioBuffer->pCur);
    printf("Buffer Size : %d\r\n", _ioBuffer->bufSize);
    printf("write bufSize : %d\r\n", (_ioBuffer->pCur - _ioBuffer->pBase));
}

// linux 에서 확인 하기 위한 함수
void printLinuxBufferIo(FILE *fp) {
    printf("file Pointer base Addr : %p\r\n", fp->_bf._base);
    printf("file Pointer cur Addr : %p\r\n", fp->_p);
//    printf("file Pointer size : %d\r\n", fp->_bf._size);
    printf("file left file buffer size : %d\r\n", fp->_bf._size - (fp->_p - fp->_bf._base));
    printf("file Pointer write bufSize : %zd\r\n", fp->_p - fp->_bf._base);
}

int main() {
    FILE *fp = NULL;
//    fp = fopen(stdin, "r"); // console 에 대한 입력을 가져오기 위한 권한으로 열기
//    fp = fopen(stdout, "w"); // console 에 대한 출력을 위한 쓰기 권한으로 열기
// console 에 대한 window 접근 -> "CON"
// console 에 대한 접근 -> linux "/dev/tty"
    fp = fopen("/dev/tty", "w");
    if (fp == NULL) {
        printf("failed open stdout\r\n");
        return 0;
    }
//    IO_Buffer *console = (IO_Buffer *) fp;
    printLinuxBufferIo(fp);
    printBufferIo((IO_Buffer *) fp);
    fputs("Hello", fp);
    printLinuxBufferIo(fp);
    printBufferIo((IO_Buffer *) fp);
    fputs("World", fp);
    printLinuxBufferIo(fp);
    printBufferIo((IO_Buffer *) fp);
    // 버퍼 선언
    char szBuffer[32] = {0};
//    fputs("testing", fp);
    fgets(szBuffer, sizeof(szBuffer), fp);
    fputs(szBuffer, stdout);
    fflush(fp);
    fclose(fp);
    return 0;
}