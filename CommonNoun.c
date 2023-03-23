#include <stdio.h>
typedef union {
    unsigned int val;
    struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char a; // 두명도 00 ~ ff (불투명)
    } rgba;
} color;

int main() {
    color sample;
    sample.val = 0xffffffff;
    sample.rgba.b = 0x00;
    printf("%x\n", sample.val);
    return 0;
}