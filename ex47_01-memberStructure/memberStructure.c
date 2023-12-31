#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _myBody {
    int nHeight;
    int nWeight;
} MyBody;

typedef struct _userData {
    char szName[32];
    char szPhone[32];
    MyBody body;
} UserData;

int main() {
    // 구조체를 초기화해서 선언하는 방식
    // 이런 방식보다는 파일을 읽어서 저장하는 형식을 많이 사용한다.
    UserData user = {"hoon", "010-1234-1234", {175, 70}};
    // 멤버 접근을 두번 해야하는 경우도 생길 수 있다. -> user.body.nHeight, user.body.nWeight 와 같이 두번 하는 경우가 생길 수 있다.
    printf("%s\t%s\t%d\t%d\r\n", user.szName, user.szPhone, user.body.nHeight, user.body.nWeight);
    return 0;
}
