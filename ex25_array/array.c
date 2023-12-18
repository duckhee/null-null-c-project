#include <stdio.h>

int main() {
    // 여기서 {}를 이용해서 배열의 요소에 대한 초기화를 한다. 첫번쨰 요소의 값만 쓰면, 0번만 초기화가 되고 나머지는 초기화가 되지 않는다.
    int aList[5] = {10, 20, 30, 40, 50};
//    int aList[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        printf("%d\t", aList[i]);
    }
    putchar('\r\n');
    aList[0] = 300;
    aList[3] = 200;
    for (int i = 0; i < 5; i++) {
        printf("%d\t", aList[i]);
    }
    putchar('\r\n');
    return 0;
}