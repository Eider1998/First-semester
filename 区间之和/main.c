#include<stdio.h>
int main(void)
{
    long n;
    int a[10], i, x, w = 0;

    scanf("%ld", &n);
    x = n;
    while(n / 10 != 0)
    {
        n = n / 10;
        w++;
    }
    for(i = 0; i < w + 1; i++)
    {
        if(x / 10 != 0)
        {
            a[i] = x % 10;
            x = x / 10;
        }
        a[w] = x;
    }
    for(i = w; i >= 0; i--)
    {
        printf("%d%c", a[i], i == 0?'\n':' ');
    }
    return 0;
}
