#include <stdio.h>

int main() {
    // 이중 포인터와 동일하다.
    // 배열의 포인터 변수이다.
    char *asLists[3] = {"Hello", "World", "String"};

    // 배열의 인덱스로 출력
    printf("%s\r\n", asLists[0]);
    printf("%s\r\n", asLists[1]);
    printf("%s\r\n", asLists[2]);

    // 배열의 인덱스에 주소 값을 변경하여 출력
    printf("%s\r\n", asLists[0] + 1);
    printf("%s\r\n", asLists[1] + 2);
    printf("%s\r\n", asLists[2] + 3);

    // 배열을 이중 인덱스를 이용해서 문자 값 출력
    printf("double list array : %c\r\n", asLists[0][3]);
    printf("double list array : %c\r\n", asLists[1][3]);
    printf("double list array : %c\r\n", asLists[2][3]);

    return 0;
}