#include <stdio.h>

int main() {
    char szName[32] = {0};
    int nAge = 0;
    printf("나이를 입력하세요 : ");
    scanf("%d%*c", &nAge);
    printf("이름을 입력하세요 : ");
//    scanf("%s", szName);
    fgets(szName, sizeof(szName), stdin);
    printf("%d세 %s\r\n", nAge, szName);
    return 0;
}