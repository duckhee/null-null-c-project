#include <stdio.h>

int main() {
    // 문자열을 저장할 메모리 주소 변수 -> 배열은 메모리 주소 값을 변수로 나타낸다.
    char szBuffer[32] = {0};
    // 사용자가 입력한 문자열을 배열에 저장하고 출력
    // window 에서만 사용 가능
//    scanf_s("%s", szBuffer, (unsigned) _countof(szBuffer));
    // unix 에서 사용하는 것 -> 메모리 주속를 넘어가는 문제가 있음
    scanf("%s", szBuffer);
    // 입력 받은 값 출력
    printf("%s\r\n", szBuffer);

    char szBufferLeft[32] = {0};
    char szBufferRight[32] = {0};
//    scanf_s("%s%s", szBufferLeft, (unsigned) _countof(szBufferLeft), szBufferRight, (unsigned) _countof(szBufferRight));
    scanf("%s%s", szBufferLeft, szBufferRight);
    return 0;
}