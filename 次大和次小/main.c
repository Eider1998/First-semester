#include<stdio.h>
#define N 1001
int main(void)
{
    int n, t, a[N], j, k, m, i;

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for(j = 0; j < n - 1; j++)
        {
            for(k = 0; k < n - 1 + j; k++)
            {
                if(a[k] > a[k + 1])
                {
                    m = a[k], a[k] = a[k + 1], a[k + 1] = m;
                }
            }
        }
        printf("%d %d\n", a[n - 2], a[1]);
    }
    return 0;
}
