#include <stdio.h>

int main() {
    char szBuffer[32] = {0};
    int x;
    // 상수에 대입 연산을 실행할 수 없다.
    // 3 = 4;
    x = 4;
    // 배열의 이름은 '주소 상수'이다. 변수가 아니다.
//    szBuffer = 'A';
    szBuffer[0] = 'A';
    return 0;
}
