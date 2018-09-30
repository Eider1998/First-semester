#include<stdio.h>
long f(int n);
int main(void)
{
    int a;
    long t;

    scanf("%d", &a);
    t = f(a);
    printf("%ld\n", t);
    return 0;
long f(int n)
{
    long y;

    if(n == 1)
    {
        y = 2;
    }
    if(n == 2)
    {
        y = 3;
    }
    if(n == 3)
    {
        y = 5;
    }
    else
    {
        y = f(n - 1) + f(n - 2) - f(n - 3);
    }
    return y;
}
