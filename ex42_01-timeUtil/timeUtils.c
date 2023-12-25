#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    struct tm curTime = {0};
    // 64bit 부호가 없는 정수 형태를 가지고 있는 시간 관련 구조체이다.
    time_t t = 0;
    // 현재 시간을 가져오기 위해서는 NULL 값을 넘겨준다. -> 1970년 01월 01일 자정 부터 몇 초가 흘렀는지 시간을 반환하게 된다.
    // 반환 값은 초를 나타내는 정수 값이다.
    // 32bit 운영체제일 경우, 2038년01월19일 이후에 표현할 수 있는 수의 범위를 넘어가게 되므로 문제가 생긴다.
    t = time(NULL);

    printf("get time sec : %d\r\n", t);
    // linux 계열
    localtime_r(&t, &curTime);
    // window 계열
//    localtime_s(&curTime, sizeof(curTime), &t);
//    localtime(&t);
    printf("get long time : %lld\r\n", t);

    char szBuffer[128] = {0};
    // 문자열 형태로 시간을 출력 하는 함수
    // linux 계열
    ctime_r(&t, szBuffer);
    // window 계열
//    ctime_s(szBuffer, sizeof(szBuffer), &t);
    printf("get buffer : %s\r\n", szBuffer);

    printf("%04d-%02d-%02d\r\n", (curTime.tm_year + 1900), (curTime.tm_mon + 1), (curTime.tm_mday));
    return 0;
}
