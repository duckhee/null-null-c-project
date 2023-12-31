#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _userData {
    char szName[32];
    char szPhone[32];
    struct _userData *pNext;
} UserData;

UserData userList[4] = {
        {"김두식", "1234", NULL},
        {"이미현", "2345", NULL},
        {"김봉석", "3456", NULL},
        {"장희수", "4567", NULL}
};

void showUserList(UserData *pUserHead);

void showUser(UserData *pUser);

int main() {
    // 포인터 변수에 다음 노드의 주소 값을 넣어주는 코드
    userList[0].pNext = &userList[1];
    userList[1].pNext = &userList[2];
    userList[2].pNext = &userList[3];
    userList[3].pNext = NULL;
//    showUserList(&userList[0]);
    showUser(&userList[0]);
    return 0;
}

void showUserList(UserData *pUserHead) {
    // 출력을 위한 포인터 변수 선언
    UserData *curUser = NULL;
    // 시작할 노드의 주소 값을 포인터 변수로 댕비
    curUser = pUserHead;
    while (curUser != NULL) {
        // 현재 노드의 값을 출력하는 코드
        printf("%s, %s\r\n", curUser->szName, curUser->szPhone);
        // debug를 위한 printf
        //printf("[%p]%s, %s, pNext:%p\r\n",curUser, curUser->szName, curUser->szPhone, curUser->pNext);
        // 다음 노드로 이동하는 코드
        curUser = curUser->pNext;
    }
}

// 비선형 구조에서 다음과 같이 재귀함수 호출 방식을 많이 사용한다.
void showUser(UserData *pUser) {
    if (pUser == NULL) {
        return;
    }
    // 현재 노드의 값을 출력하는 코드
    printf("%s, %s\r\n", pUser->szName, pUser->szPhone);
    showUser(pUser->pNext);
}