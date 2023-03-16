#include <stdio.h>
int add (int a, int b) { // 덧셈 함수
    return a + b;
}

int sub (int a, int b) {
    return a- b;
}

int main() {
    inf (*fp)(int, int); // 함수 포인터 선언
    fp = add; // add 함수의 메모리 주소를 함수 포인터 fp에 저장
    printf("결과 값 : %d\n", fp(10, 20)); // add 함수를 호출
    fp = sub; // sub 함수의 메모리 주소를 함수 포인터 fp애 저장
    printf("결과 값 : %d\n", fp(10, 20)); // sub 함수 호출

    return 0;
}
