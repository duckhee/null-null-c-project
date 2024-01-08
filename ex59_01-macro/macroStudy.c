#include <stdio.h>

// macro 함수 정의
// macro 함수인 경우 주로 대문자로 사용을 한다.
// 매크로 함수를 사용할 때, 식에 가로를 사용해서 순서를 정의를 해준다.
#define ADD(a, b) ((a) + (b))

int main() {
    int a = 10, b = 30;
    int result = 0;

    result = ADD(a, b);

    printf("macro function Add(a,b) result : %d\r\n", result);

    return 0;
}

