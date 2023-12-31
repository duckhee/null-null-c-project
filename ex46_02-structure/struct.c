#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _UserData {
    int age;
    char szName[32];
    char szPhone[32];
} UserData;

void getUserData(UserData *pUser) {
    printf("%d 살\t%s\t%s\r\n", pUser->age, pUser->szName, pUser->szPhone);
    UserData user = {10, "Hoon", "010-1111-1111"};
    memcpy(pUser, &user, sizeof(UserData));
}

void showUserData(UserData *pUser) {

    printf("%d 살\t%s\t%s\r\n", pUser->age, pUser->szName, pUser->szPhone);
}

int main() {
    UserData user = {5, "Hong", "010-1234-1234"};
    showUserData(&user);
    UserData result;
    getUserData(&result);
    showUserData(&result);
    return 0;
}