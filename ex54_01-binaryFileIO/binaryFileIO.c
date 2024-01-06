#include <stdio.h>
#include <memory.h>

typedef struct _UserData {
    char szName[32];
    char szPhone[32];
} UserData;

int main() {
    FILE *fp = NULL;
    UserData userData = {"Ho-Song", "123-1234"};
    // binary 모드로 파일을 쓰겠다는 의미이다.
    //  binary 모드를 사용할 때, mp3, mp4 멀티미디어 파일의 raw 데이터나 구조체를 파일에 작성할 때 많이 사용한다.

    fp = fopen("Test.dat", "wb");
    if (fp == NULL) {
        printf("file open error \r\n");
        return 0;
    }
    // 파일에 쓸 내용이 저장되어 있는 메모리 주소를 써주고, 메모리 크기를 기술, 몇번 쓸 것인지를 기술
    fwrite(&userData, sizeof(UserData), sizeof(char), fp);
    fclose(fp);

    memset(&userData, 0, sizeof(UserData));
    FILE *fpRead = NULL;
    fpRead = fopen("Test.dat", "rn");
    if (fpRead == NULL) {
        printf("file read error \r\n");
        return 0;
    }
    // 파일에서 데이터를 읽을 때, 중요한 것은 사이즈이다. -> 자료형은 (void *)로 받는다.
    fread(&userData, sizeof(UserData), 1, fpRead);
    puts(userData.szName);
    puts(userData.szPhone);
    fclose(fpRead);
    return 0;
}