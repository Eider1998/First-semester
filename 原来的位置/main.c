#include<stdio.h>
int main(void)
{
    int i, n, a[100], j, t, w, q, k;

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        w = 0;
        scanf("%d", &n);
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for(q = 0; q < n - 1; q++)
        {
            for(j = 0; j < n - 1 - i; j++)
            {
                if(a[j] > a[j + 1])
                {
                   k = a[j], a[j] = a[j + 1], a[j + 1] = k;
                    w++;
                }
            }
        }
        printf("%d\n", w);
    }
    return 0;
}
