#include <stdio.h>
int main(void) {
    int a[3] = {10, 20, 30};
    printf("%p %p %p\n", a, a+0, &a[0]);
    printf("%p %p\n", a+1, &a[1]);
    printf("%p %p\n", a+2, &a[2]);
    printf("%ld %ld %ld\n", sizeof(a), sizeof(a+0), sizeof(&a[0])); // int형이 3개 있기 때문, 주소값이 되기 때문에 8byte 됨
    return 0;
}
