#include<stdio.h>
int main(void)
{
    int m, n, i, a[1000], j, k, t, b;

    while(scanf("%d %d", &n, &m) != EOF)
    {
        b = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n - 1; i++)
        {
            k = i;
            for(j = i + 1; j < n; j++)
            {
                if(a[k] < a[j])
                {
                    k = j;
                }
            }
            if(k != i)
            {
                t = a[k], a[k] = a[i], a[i] = t;
            }
        }
        for(i = 0; i < m; i++)
        {
            b += a[i];
        }
        printf("%d\n", b);
    }
    return 0;
}
