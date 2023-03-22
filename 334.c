#include <stdio.h>
struct GameInfo {
        char * name;
        int year;
        int price;
        char * company;
};

int main(void) {
    struct GameInfo gameInfo1;
    gameInfo1.name = "나도게임";
    gameInfo1.year = 2022;
    gameInfo1.price = 50;
    gameInfo1.company = "나도회사";

    struct GameInfo * gamePtr;
    gamePtr = &gameInfo1;
    printf("-- 미션맨의 게임 출시 정보 --\n");
    printf("게임 이름 : %s\n", gamesPtr->name);
    printf("발매 연도 : %d\n", gamesPtr->year);
    printf("게임 가격 : %d\n", gamesPtr->price);
    printf("제작 회사 : %s\n", gamesPtr->company);

    return 0;
}