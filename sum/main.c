#include<stdio.h>
int main(void)
{
    int a, b, r, t, x;

    scanf("%d %d", &a, &b);
    if(a > b)
    {
        t = a, a = b, b = t;
    }
    x = a * b;
    r = 1;
    while(r != 0)
    {
        r = b % a;
        a = r;
        b = a;
    }
    printf("%d %d\n", a, x / a);
    return 0;
}
