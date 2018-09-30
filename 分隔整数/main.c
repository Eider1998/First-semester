#include<stdio.h>
int main(void)
{
    long n;
    int i, w = 0, a[10], x, t, j;

    scanf("%ld", &n);
    x = n;
    while(n / 10 != 0)
    {
        n = n / 10;
        w++;
    }
    for(i = 0; i < w ; i++)
    {
        if(x / 10 != 0)
        {
            a[i] = x % 10;
            x = x / 10;
        }
    }
    a[w] = x;
    i = 0;
    j = w;
    while(i < j)
    {
        t = a[i], a[i] = a[j], a[j] = t;
        i++;
        j--;
    }
    for(i = 0; i < w + 1; i++)
    {
        printf("%d%c", a[i], i == w?'\n':' ');
    }
    return 0;
}
