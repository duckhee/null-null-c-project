#include <stdio.h>

int main(int argc, char **argv) {
//    int x = 10;
//    x = x + 1;
//    printf("x + 1 = %d\r\n", x);
//    x += 1;
//    printf("x+=1 = %d\r\n", x);
//    ++x;
//    printf("++x = %d \r\n", x);
//    x++;
//    printf("x++ = %d\r\n", x);

    int nResult = 0, x = 0;
    ++x;
    printf("%d\r\n", x);
    x++;
    printf("%d\r\n", x);
    // 전위식이므로 우선 순위가 유지가 되므로 값이 증가된 후에 대입이 일어나게 된다.
    nResult = ++x;
    printf("%d, %d\r\n", nResult, x);
    // 후위식이므로 우선 순위가 최하위로 되기 때문에, nResult 에 먼저 대입이 들어가게 된다.
    nResult = x--;
    printf("%d, %d\r\n", nResult, x);
    // nResult = ++x + ++y + x--; => nResult = ++x + ++y + x; x--;와 같다.
    return 0;
}