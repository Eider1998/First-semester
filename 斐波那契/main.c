#include<stdio.h>
int fib(int n);
int main(void)
{
    int x, t;

    scanf("%d", &x);
    t = fib(x);
    printf("%d\n", t);
    return 0;
}
int fib(int n)
{
    int p;
    if((n == 1) || (n == 2))
    {
        p = 1;
    }
    else
    {
        p = fib(n - 1) + fib(n - 2);
    }
    return p;
}
