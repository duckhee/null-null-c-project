#include <stdio.h>
#include <stdlib.h>
// 1byte 단위로 붙여서 처리하라고 하는 것
//#pragma pack(push, 1)
typedef struct _UserData {
    char ch;
    int nAge;
    char szName[5];
} UserData;
//#pragma pack(pop)

// window visual stdio 에서 기본 런타임 검사 기본 값을 해두어야 메모리 볼때, 변수 값들이 모여 있게 된다.
int main() {
    UserData user = {'A', 10, "hoon"};
    int data = 0x11223344;
    printf("%c, %d, %s\r\n", user.ch, user.nAge, user.szName);
    printf("%d\r\n", sizeof(UserData));
    return 0;
}
