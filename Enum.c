#include <stdio.h>
typedef enum week {
    SUN = 0,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
} Week;

int main(void) {
    Week ju;
    ju = TUE;
    printf("%d\n", ju); // TUE의 value값 = 2
    return 0;
}