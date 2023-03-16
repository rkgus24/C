#include <stdio.h>
int main(void) {
    int a[3];
    int* p;
    p = a;
    printf("%d %d %d\n", a[0], a[1], a[2]); // 쓰레기 값
    *p++ = 10; // *p = 10; p = p + 1
    printf("%d %d %d\n", a[0], a[1], a[2]);
    *p++ = 20; // *p = 20; p = p + 1
    printf("%d %d %d\n", a[0], a[1], a[2]);
    *p = 30;
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}
