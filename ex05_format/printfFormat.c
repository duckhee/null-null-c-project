#include <stdio.h>

int main() {
    printf("%d\r\n", 1234);
    printf("%d %d\r\n", 1234, -1234);
    // 부호를 무조건 출력할 때, 사용하는 formatter -> %+를 이용해서 출력 한다.
    printf("%+d %+d\r\n", 1234, -1234);
    // 공간으로 해당 자리 수를 채워서 보여준다. -> 8만큼 크기를 갖는 출력
    printf("%8d\r\n", 1234);
    // 빈 공간에 0을 넣어서 출력한다
    printf("%08d\r\n", 1234);
    // 문자열 출력 예제
    printf("%s\r\n", "Hello, World");
    return 0;
}