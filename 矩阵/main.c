#include<stdio.h>
int main(void)
{
    int i, n, a[10], b[10], s[10], k, j, t, m;

    while(scanf("%d", &n) && n != 0)
    {
        for(i = 0; i < n; i++)
        {
            s[i] = 0;
        }
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        for(i = 0; i < n; i++)
        {
            while(a[i] / 10 != 0)
            {
                m = a[i] % 10;
                s[i] += m;
                a[i] = a[i] / 10;

            }
            s[i] = s[i] + a[i];
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
                t = b[k], b[k] = b[i], b[i] = t;
            }
        }
        for(i = 0; i < n; i++)
        {
            printf("%d%c", b[i], i == n - 1?'\n':' ');
        }

    }
    return 0;
}
