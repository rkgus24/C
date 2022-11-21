//1960
#include <stdio.h>

int main() {
    int i, n, DT[100001] = {1,2,};
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        DT[i] = (DT[i-1] + i) % 137;
    }
    printf("%d", DT[n]);
    return 0;
}
