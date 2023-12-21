#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char szBuffer[] = "Hello";
    char szComp[12] = {"TestString"};
    char *pszComp = "TestString";
    char szSearch[12] = {"I am a boy"};
    // 얇은 복사를 하는 것이다. -> 버퍼의 주소 값을 저장하는 형태이다.
    char *pszBuffer = szBuffer;

    char *pszHeap = malloc(16);
    // deep copy 를 실행한다.
    strcpy(pszHeap, pszBuffer);

    puts(pszHeap);
    // 동적할당에 대한 메모리 해제
    free(pszHeap);
    // 문자열 비교에 대한 출력
    printf("compare string : %d\r\n", strcmp(pszComp, szComp));
    printf("compare string : %d\r\n", strcmp("TestString", szComp));
    printf("compare string : %d\r\n", strcmp("Test", "TestString"));

    // 문자열의 주소를 찾기 위한 출력
    printf("%p\r\n", szSearch);
    // 문자열에서 값을 찾기 위한 함수 출력 -> 찾는 문자열의 시작 지점의 주소를 반환한다.
    printf("am pointer : %p\r\n", strstr(szSearch, "am"));
    printf("boy pointer : %p\r\n", strstr(szSearch, "boy"));
    // 인덱스를 출력하기 위해서 찾은 주소의 값에 기준 주소 값을 뺴주면 인덱스 값을 반환하게 된다.
    printf("am index : %d\r\n", strstr(szSearch, "am") - szSearch);
    printf("boy index : %d\r\n", strstr(szSearch, "boy") - szSearch);
    return 0;
}
