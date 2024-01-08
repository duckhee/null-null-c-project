#include <stdio.h>

// 문자열로 만들어 주는 것
#define STRING(a) #a
// 두개의 문자를 함쳐서 소스코드의 문자가 된다.
#define PASTER(a, b) a##b

int main() {
    int nData = 10;
    printf("%d\r\n", PASTER(nDa, ta));
    printf("%d\r\n", nData);
    printf("%s\r\n", STRING(nData));
    return 0;
}