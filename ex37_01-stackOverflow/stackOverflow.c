#include <stdio.h>
#include <string.h>

int testFunction() {
    static int nData = 0;
    ++nData;
    return nData;
}

int main(int argc, char **argv) {
    char stOverflow[1024 * 1024] = {0};
    printf("tests func : %d\r\n", testFunction());
    printf("tests func : %d\r\n", testFunction());
    printf("tests func : %d\r\n", testFunction());
    printf("stOverflow : %lu\r\n", strlen(stOverflow));
    puts("END");
    return 0;
}
