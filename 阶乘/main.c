#include<stdio.h>
long f(int n);
int main(void)
{
    int n;
    long ff;

    scanf("%d", &n);
    ff = f(n);
    printf("%ld\n", ff);
    return 0;
}
long f(int n)
{
    long p;

    if(n == 1)
    {
        p = 1;
    }
    else
    {
        p = n * f (n - 1);
    }
    return p;
}
