#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int arrayAnimal[4][5];
char * strAnimal[10];
int checkAnimal[4][5];

void initAnimalArray();
void initAnimalName(); 
void shuffleAnimal();
int getEmptyPosition(); 
int conv_pos_x(int x); 
int conv_pos_y(int y);
void printAnimals(); 
void printQuestion();
int foundAllAnimals();

int main(void) {
    srand(time(NULL));
    initAnimalArray();
    initAnimalName();
    shuffleAnimal();
    int failCount = 0;
    while (1) {
        int select1 = 0;
        int select2 = 0;
        printAnimals();
        printQuestion();
        printf("\n뒤집을 카드 두 장을 고르세요.(예: 12 4) -> "); 
        scanf("%d %d", &select1, &select2);
        if (select1 == select2) {
            continue;
        }
        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);
        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);
        
        if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 
                && checkAnimal[secondSelect_x][secondSelect_y] == 0) 
                && (arrayAnimal[firstSelect_x][firstSelect_y] == 
                arrayAnimal[secondSelect_x][secondSelect_y])) { 
            printf("\n\n빙고! %s 발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            checkAnimal[firstSelect_x][firstSelect_y] = 1;
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }
        else {
            printf("\n\n땡! 서로 다른 동물 카드거나 이미 뒤집힌 카드입니다.\n");
            printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n");
            failCount++;
        }
        if (foundAllAnimals() == 1) {
            printf("\n\n축하합니다 모든 동물을 다 찾았습니다\n");
            printf("총 %d번 실패했습니다\n", failCount);
            break;
        }
    }
    return 0;
}

void initAnimalArray() {
    for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 5; j++) {
                arrayAnimal[i][j] = -1;
            }
        }
}

void initAnimalName() { 
    strAnimal[0] = "우주하마";
    strAnimal[1] = "코알라";
    strAnimal[2] = "알파카";
    strAnimal[3] = "고양이";
    strAnimal[4] = "다람쥐";
    strAnimal[5] = "병아리";
    strAnimal[6] = "곰";
    strAnimal[7] = "호랑이";
    strAnimal[8] = "토끼";
    strAnimal[9] = "고라니";
}

void shuffleAnimal() { 
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 2; j++) { 
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);
            arrayAnimal[x][y] = i;
        }
    }
}

int getEmptyPosition() {
    while (1) {
        int randPos = rand() % 20;
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);
        if (arrayAnimal[x][y] == -1) {
            return randPos;
        }
    }
    return 0;
}

int conv_pos_x(int x) {
    return x / 5;
}

int conv_pos_y(int y) { 
    return y % 5;
}

void printAnimals() { 
    printf("\n========= 동물 위치를 보여줍니다. =========\n\n"); 
    for (int i = 0; i < 4; i++) {
         for (int j = 0; j < 5; j++) {
            printf("%s\t", strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n"); 
    }
    printf("\n===========================================\n");
}

void printQuestion() { 
    printf("\n(문제)\n\n");
    int seq = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (checkAnimal[i][j] != 0) {
                printf("%s\t", strAnimal[arrayAnimal[i][j]]);
            }
            else {
                printf("%8d", seq);
            }
            seq++;
        }
        printf("\n");
    }
}

int foundAllAnimals() { 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (checkAnimal[i][j] == 0) {
                return 0;
            }
        }
    }
    return 1;
}