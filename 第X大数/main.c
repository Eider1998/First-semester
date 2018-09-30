#include<stdio.h>
int main(void)
{
    int i, n, a[10], j, k, s[10], b, t, y[10];

    while(scanf("%d", &n) && n != 0)
    {
        for(i = 0; i < 11; i++)
        {
            s[i] = 0;
        }
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n; i++)
        {
            y[i] = a[i];
        }
        for(i = 0; i < n; i++)
        {
            if(a[i] / 10 != 0)
            {
                b = a[i] % 10;
                a[i] = a[i] / 10;
                s[i] += b;
            }
            s[i] += a[i];
        }
        for(i = 0; i < n - 1; i++)
        {
            k = i;
            for(j = i + 1; j < n; j++)
            {
                if(s[k] > s[j])
                {
                    k = j;
                }
            }
            if(k != i)
            {
                t = s[k], s[k] = s[i], s[i] = t;
                t = y[k], y[k] = y[i],y[i] = t;
            }
        }
        for(i = 0; i < n; i++)
        {
            printf("%d%c", s[i], i == n - 1?'\n':' ');
        }
    }
    return 0;
}
