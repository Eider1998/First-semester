#include<stdio.h>
int main(void)
{
    int i, n, a[102], t, j, w, k, m;

    scanf("%d", &n);
    for(j = 0; j < n; j++)
    {
        w = 0;
        scanf("%d", &t);
        for(i = 0; i < t; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < t - 1; i++)
        {
            for(k = 0; k < t - 1 - i; k++)
            {
                if(a[k] > a[k + 1])
                {
                   m = a[k + 1], a[k + 1] = a[k], a[k] = m;
                    w++;
                }
            }
        }
        printf("%d\n", w);
    }
    return 0;
}
