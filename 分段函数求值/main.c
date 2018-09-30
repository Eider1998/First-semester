#include<stdio.h>
int main(void)
{
    int i, n, x, y, a, b, c, d, m;

    while(scanf("%d", &n) != EOF)
    {
        m = 0;
        scanf("%d %d\n", &x, &y);
        scanf("%d %d", &c, &d);
        for(i = 1; i <= n; i++)
        {
            scanf("%d %d\n", &a, &b);
            if(a > x && b > y && a < c && b < d)
           {
             m++;
           }
        }
        printf("%d\n", m);
    }
    return 0;
}
