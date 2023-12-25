#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 다음과 같이 사용할 경우 struct 키워드를 항상 사용을 해줘야한다.
struct USERDATA {
    int nAge; // member(field)라고 부른다.
    char szName[32];
    char szPhone[32];
};

// 다음과 같이 typedef 를 사용할 경우, struct 키워드 생략이 가능하다.
typedef struct _USERDATA {
    int nAge;
    char szName[32];
    char szPhone[32];
} UserData;


int main(int argc, char **argv) {
    // 초기 값으로 구조체 선언 하는 것 -> 인스턴스라고 이야기한다.
    struct USERDATA user = {0, "", ""};
    // 구조체에 대한 멤버 접근 하여 값 변경
    user.nAge = 10;
    strcpy(user.szName, "Hoon");
    strcpy(user.szPhone, "010-1234-5678");
    printf("%d살 %s, %s\r\n", user.nAge, user.szName, user.szPhone);
    UserData user1 = {0, "", ""};
    user1.nAge = 10;
    strcpy(user1.szName, "Hoon");
    strcpy(user1.szPhone, "010-1234-5678");
    printf("%d살 %s, %s\r\n", user1.nAge, user1.szName, user1.szPhone);
    return 0;
}