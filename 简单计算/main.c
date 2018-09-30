#include<stdio.h>
int f(int n);
int main(void)
{
    int a, t;

    scanf("%d", &a);
    t = f(a);
    printf("%d\n", t);
    return 0;
}
int f(int n)
{
    int y;

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
