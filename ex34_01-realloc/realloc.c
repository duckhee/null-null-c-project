#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc/malloc.h>

int main() {
    char *pszBuffer = NULL, *pszNewBuffer = NULL;
    // 동적으로 메모리 할당
    pszBuffer = (char *) malloc(12);
    // 형식 지정자를 이용해서 메모리에 값을 복사하는 함수
    sprintf(pszBuffer, "%s", "TestString");
//    printf("[%p] %zd %s \r\n", pszBuffer, _msize(pszBuffer), pszBuffer);
    printf("[%p] %zd %s \r\n", pszBuffer, malloc_size(pszBuffer), pszBuffer);

    pszNewBuffer = (char *) realloc(pszBuffer, 32);
    sprintf(pszNewBuffer, "%s", "TestString Data");
    printf("[%p] %zd %s \r\n", pszNewBuffer, malloc_size(pszNewBuffer), pszNewBuffer);
    if (pszNewBuffer == NULL) {
        free(pszBuffer);
    } else {
        free(pszNewBuffer);
    }

    return 0;
}
