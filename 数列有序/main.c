#include<stdio.h>
int main(void)
{
    int i, n, a[1000], t, k, j, m, x;
    while(scanf("%d", &t) != EOF)
    {
        for(x = 1; x <= t; x++)
        {
        scanf("%d", &n);
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
                m = a[k], a[k] = a[i], a[i] = m;
            }
        }
        printf("%d %d\n", a[1], a[n - 2]);
        }

    }
    return 0;
}
