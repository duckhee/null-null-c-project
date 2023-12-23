#include <stdio.h>

int *testFunc() {
    int nData = 10;
    return &nData;
}

int *testFunc2() {
    int a = 5;
    return NULL;
}

int main(int argc, char **argv) {
    int *pnResult = NULL;
    pnResult = testFunc();
    printf("%d\r\n", *pnResult);
    testFunc2();
    // 포인터에 간접 지정으로 값을 가져오기
    printf("%d\r\n", *pnResult);

    return 0;
}