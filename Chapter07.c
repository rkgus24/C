#include <stdio.h>
int main(void) {
    int weigh;
    double height;
    double BMI;
    printf("몸무게(kg)와 키(cm) 입력 >> ");
    scanf("%d%lf", &weigh, &height);

    BMI = weigh / ((height * 0.01) * (height * 0.01));

    if (BMI < 25 && BMI >= 20)
        printf("표준입니다.\n");
    else
        printf("체중 관리가 필요합니다.\n");

    return 0;
}
