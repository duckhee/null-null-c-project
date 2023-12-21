#include <stdio.h>

int main() {
    char aStrList[2][12] = {"Hello", "World"};
    // char **pStrList = aStrList;
    char (*pStrList)[12] = aStrList;
    // 다음과 같이 가로가 없을 경우 에러가 발생한다.
//    char *pStrList[12] = aStrList;
    puts(pStrList[0]);
    puts(*pStrList);
    puts(pStrList[1]);
    puts(*(pStrList+1));
    return 0;
}