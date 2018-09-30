#include<stdio.h>
int f(int n);
int main(void)
{
    int n, t;

    scanf("%d", &n);
    t  = f(n);
    printf("%d\n", t);
    return 0;
}
int f(int n)
{
    int a;
    if((n == 1) || (n == 2))
    {
        a = 1;
    }
    else
    {
        a = f(n - 1) + f(n - 2);
    }
    return a;
}
