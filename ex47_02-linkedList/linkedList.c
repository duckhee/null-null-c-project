#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _userData {
    char szName[32];
    char szPhone[32];
    // 리스트를 만든다고 헀을 때, 자기 자신을 가르키는 포인터 변수가 등장한다.
    // 자기 자신의 구조쳉서 사용을 할 때에는 형 재 선언이 일어나기 전이므로 struct의 원형을 써줘야한다. -> 자기 참조 구조체 형태
    struct _userData *pNext;
} UserData;

int main() {
    // 보통 이러한 형태를 Node라고 이야기를 많이한다.
    // 보통 동적할당으로 할당을 하는 형식을 많이 사용한다.
    UserData user = {"김두식", "1234", NULL};
    UserData newUser = {"이미현", "1235", NULL};
    // 포인터 변수이므로 주소 값 형태가 들어가야한다.
    // 데이터를 연결 시켜주는 코드이다.
    user.pNext = &newUser;
    printf("%s, %s\r\n", user.szName, user.szPhone);
    printf("%s, %s\r\n", user.pNext->szName, user.pNext->szPhone);
    return 0;
}