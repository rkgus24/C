#include <stdio.h>

struct GameInfo {
    char * name;
    int year;
    int price;
    char * company;
};

int main(void) {
    struct GameInfo games[2] = {
        {"나도게임", 2022, 50, "나도회사"},
        {"너도게임", 2022, 100, "너도회사"}
    };

    printf("-- 게임 출시 정보 --\n");
    printf("게임 이름 : %s\n", games[0].name);
    printf("발매 연도 : %d\n", games[0].year);
    printf("게임 가격 : %d\n", games[0].price);
    printf("제작 회사 : %s\n", games[0].company);

    printf("\n--또 다른 게임 출시 정보--\n");
    printf("게임 이름 : %s\n", games[1].name);
    printf("발매 연도 : %d\n", games[1].year);
    printf("게임 가격 : %d\n", games[1].price);
    printf("제작 회사 : %s\n", games[1].company);

    return 0;
}
