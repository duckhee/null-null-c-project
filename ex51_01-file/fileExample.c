#define _GNU_SOURCE

#include <stdio.h>
#include <fcntl.h>


int main() {
    FILE *fp = NULL;
    fp = fopen("Text.txt", "w");
    if (fp == NULL) {
        puts("ERROR : Failed to open file!\r\n");
        return 0;
    }
    
//    fprintf(fp, "%s\r\n", "Hello");
//    fclose(fp);

    return 0;
}