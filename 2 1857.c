//1857
#include <stdio.h>

int f(int n, int r)
{
    if(n<r) return 0;
    else if(r==0 || r==n || n==1) return 1;
    else return f(n-1, r-1) + f(n-1, r);
}

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", f(n, r));
    return 0;
}
