#include <stdio.h>
#include <stdlib.h>

// callee
// 동적 메모리를 저장한 변수는 stack frame 에서 사라진다. -> 함수 리턴 시
char *getName(void) {
    char *pszName = NULL;
    pszName = (char *) calloc(32, sizeof(char));
    printf("input your name : ");
    fgets(pszName, 32, stdin);
    return pszName;
}

// caller
int main(int argc, char **argv) {
    char *pszName = NULL;
    pszName = getName();
    printf("your name is %s\r\n", pszName);
    // 주소 값을 접근 할 수 있는 부분이 피호출함수에서 밖에 접근을 못하는 상황이므로 해당 메모리를 해제를 시켜줘야한다.
    // 주소 값을 접근할 수 있는 함수가 stack frame 에서 사라졌기 때문에
    free(pszName);
    return 0;
}
