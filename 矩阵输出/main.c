#include<stdio.h>
int  main(void)
{
    int i, n, a[20], j, x, k;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(k = 0; k < n; k++)
    {
        printf("%d%c", a[k], k == n - 1?'\n':' ');
    }
    for(i = 1; i <= n - 1; i++)
    {
        x = a[n - 1];
        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = x;
        for(k = 0; k < n; k++)
        {
            printf("%d%c", a[k], k == n - 1?'\n':' ');
        }
    }
    return 0;
}
