#include <stdio.h>

int main(void) {
    int distance, speed;
    int hour, min;
    double time;
    double seconds;

    printf("거리, 속력 입력 >> "); // 시간 = 거리 / 속력
    scanf("%d %d", &distance, &speed);

    time = (double)distance / speed * 3600;
    hour = time / 3600;
    time = time - (hour * 3600);
    min = time / 60;
    time = time - (min * 60);
    seconds = time;

    printf("소요 시간은 %d시간 %d분 %3.lf초입니다.", hour, min, seconds);

    return 0;
}
