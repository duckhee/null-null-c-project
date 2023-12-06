#include <stdio.h>
// window 에서 _countof()를 사용하기 위해서 추가
#include <stdlib.h>


int main() {
    int aList[16];
    printf("%lld\r\n", sizeof(aList));
    printf("%lu\r\n", sizeof(aList));
    printf("%lld\r\n", sizeof(aList) / sizeof(int)); // 해당 연산은 window에서 _countof()이다.
    printf("%lu\r\n", sizeof(aList) / sizeof(int));
    return 0;
}