#include <stdio.h>
#include "counter.h"

// 해당 변수가 외부 파일에 존재한다고 의미하는 것 -> 외부 파일에서 해당 변수의 값을 가져오라고 하는 의미이다.
// 다음과 같이 전역변수로 선언이 되어 있을 경우 extern 키워드는 생략이 가능하다.
extern int g_nCounter;

int main() {
    initCounter(10);
    printf("get global counter : %d\r\n", g_nCounter);
    return 0;
}