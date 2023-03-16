#include <stdio.h>
int add(int a, int b) {
    return a+b;
}
int main() {
    int (*pfunc)(int, int);
    pfunc = add;
    printf("%d\n", pfunc(1, 2));
    printf("%d\n", add(1, 2));
}
