#include <stdio.h>
typedef union num {
    char a;
    short b;
    int c;
} Num;

int main(void) {
    Num n;
    n.c = 0x12345678; // 8이 제일 작은 비트
    printf("%x\n", n.a); // a에 들어있는 값을 16진수로 출력
    printf("%x\n", n.b); // b에 들어있는 값을 16진수로 출력
    printf("%x\n", n.c); // c에 들어있는 값을 16진수로 출력
    
    return 0;
}