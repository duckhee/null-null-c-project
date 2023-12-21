#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char szBuffer[32] = {"You are a girl"};
    printf("sz Buffer : %s\r\n", szBuffer);

    // 배열 연산자, 간접 지정자 -> 1차원 배열 single pointer 일때 항상 l-value 로 나타내어진다.
    printf("%c\r\n", szBuffer[0]);
    printf("%c\r\n", *szBuffer);
    // szBuffer[0] 을 풀어서 사용 했을 때 *(szBuffer + 0) 이 된다.
    printf("%c\r\n", *(szBuffer + 0));
    //
    printf("%c\r\n", szBuffer[5]);
    // szBuffer[5]와 동일한 값이 나온다
    // => 가로를 사용하지 않으면, 연산의 순서가 변경이 되어서 잘못된 값이 나오게 된다. (Y + 5)
    printf("%c\r\n", *(szBuffer + 5));

    // 인덱스가 4번째인 위치의 주소 값을 가져와서 배열을 출력 하는 것이다.
    printf("%s\r\n", &szBuffer[4]);
    // 간접 지정하고 주소 연산자는 정 반대의 역할을 하기 때문에 결과적으로 두 연산이 상충 되면서 없어진다.
    printf("%s\r\n", &*(szBuffer + 4));
    // 인덱스가 4번째인 위치의 주소 값을 가져와서 배열을 출력 하는 것이다.
    printf("%s\r\n", szBuffer + 4);
    printf("%p\r\n", szBuffer + 4);
    return 0;
}