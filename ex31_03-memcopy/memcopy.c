#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char szBuffer[12] = {"HelloWorld"};
    char szNewBuffer[12] = {0};
    char testBuffer[12] = {"TestString"};
    char *pTestData = "TestString";
    // 4번째 요소까지만 값을 복사한다는 의미이다.
    memcpy(szNewBuffer, szBuffer, 4);
    puts(szNewBuffer);

    memcpy(szNewBuffer, szBuffer, 6);
    puts(szNewBuffer);

    memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
    puts(szNewBuffer);

    // 문자열 비교 함수
    // 값이 같을 때에는 0의 값이 나온다.
    printf("memcmp : %d\r\n", memcmp(testBuffer, pTestData, 10));
    // 첫번째 인자로 받은 배열의 값이 크면 양수를 반환한다.
    printf("memcmp : %d\r\n", memcmp("teststring", pTestData, 10));
    // 두번째 인자로 받은 배열의 값이 크면 음수를 반환한다.
    printf("memcmp : %d\r\n", memcmp("DataString", pTestData, 10));

    return 0;
}