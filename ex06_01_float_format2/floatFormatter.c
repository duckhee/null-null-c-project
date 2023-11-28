#include <stdio.h>

int main() {
    double dData = 123.456;
    printf("%f, %f \r\n", dData, -123.456);
    // 소수점 2번째 자리에서 반올림함고 1자리까지 출력
    printf("%.1f\r\n", dData);
    // 소수점 3번쨰 자리에서 반올림하고 2자리까지 출력
    printf("%.2f\r\n", dData);
    // 소수점 4번째 자리에서 반올림하고 3자리까지 출력
    printf("%.3f\r\n", dData);

    // 8자리를 차지하게 출력
    printf("%8d\r\n", 123);
    // 소수점을 포함해 12자리로 출력 단, 소수점 이하 4번째 자리에서 반올림하고 3자리까지 출력한다.
    printf("%12.3f\r\n", dData);
    printf("%012.3f\r\n", dData);
    
    return 0;
}