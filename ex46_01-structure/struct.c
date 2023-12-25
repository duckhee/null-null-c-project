#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 구조체 선언
typedef struct _UserData {
    int nAge;
    char szName[32];
    char szPhone[32];
} UserData;

UserData getUserData(void) {
    UserData user = {0};
    printf("call by reference : ");
    scanf("%d%*c", &user.nAge);
    fgets(user.szName, sizeof(user.szName), stdin);
    fgets(user.szPhone, sizeof(user.szPhone), stdin);
    return user;
}

UserData *getppUserData(void) {
    // 지역 변수로 선언이 되어 있으므로 주소 값을 넘겨주면 안된다.
    UserData user = {0};
    printf("return pointer user : ");
    scanf("%d%*c", &user.nAge);
    fgets(user.szName, sizeof(user.szName), stdin);
    fgets(user.szPhone, sizeof(user.szPhone), stdin);
    return &user;
}

void getpUserData(UserData *pUser) {
    printf("get function pointer :");
    scanf("%d%*c", &pUser->nAge);
    fgets(pUser->szName, sizeof(pUser->szName), stdin);
    fgets(pUser->szPhone, sizeof(pUser->szPhone), stdin);
    return;
}

int main(int argc, char **argv) {
    // 구조체 포인터 변수
    UserData *pUser = NULL;
    // 구조체 동적 할당하는 것
    pUser = (UserData *) malloc(sizeof(UserData));
    // 자료에 대한 call by reference 로 값을 넣어주는 형태
    pUser->nAge = 10;
    strcpy(pUser->szName, "Hoon");
    strcpy(pUser->szPhone, "010-1234-1234");
    // 출력
    printf("%d살\tname : %s\tphone : %s\r\n", pUser->nAge, pUser->szName, pUser->szPhone);
    // 동적 할당 메모리 해제
    free(pUser);

    UserData newUser = {0};
    getpUserData(&newUser);
    printf("%d살\tname : %s\tphone : %s\r\n", newUser.nAge, newUser.szName, newUser.szPhone);
    // 구조체를 받아와서 넣어주는 형태는 복사를 해주는 형태가 된다.
    UserData fUser = {0};
    fUser = getUserData();
    printf("%d살\tname : %s\tphone : %s\r\n", fUser.nAge, fUser.szName, fUser.szPhone);
    // 지역 변수를 넘겨주는 형태가 되므로 문제가 생긴다.
//    UserData *pfUser = NULL;
//    pfUser = getppUserData();
//    printf("%d살\tname : %s\tphone : %s\r\n", pfUser->nAge, pfUser->szName, pfUser->szPhone);
//    free(pfUser);
//    free(&fUser);
    return 0;
}