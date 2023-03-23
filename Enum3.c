// scanf로 교과 코드를 입력하면 과목명이 출력되도록 프로그래밍 하시오
#include <stdio.h>

typedef enum subject_code {
    LINUX = 3,
    MICRO = 5,
    PROJECT = 8
} Code;

int main(void) {
    Code emb;

    printf("교과 코드(3, 5, 8): ");
    scanf("%d", &emb);

    switch (emb) {
        case 3:
            emb = LINUX;
            printf("LINUX\n");
            break;
        case 5:
            emb = MICRO;
            printf("MICRO\n");
            break;
        case 8:
            emb = PROJECT;
            printf("PROJECT\n");
            break;
        default:
            printf("다시 하셈\n");
            return 1;
    }

    return 0;
}
