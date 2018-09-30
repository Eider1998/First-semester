#include<stdio.h>
int C(int n, int m);
int main(void)
{
    int i, n, a, b, t;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);
        t = C(a, b);
        printf("%d\n", t);
    }
}
int C(int n, int m)
{
    int y;

    if(m == 0)
    {
        y = 1;
    }
    if(n == 1)
    {
        y = 1;
    }
    if(m == n)
    {
        y = 1;
    }
    if(m > 0 && n > m && n <= 20 )
    {
        y = C(n - 1, m - 1) + C(n - 1, m);
    }
    return y;
}
