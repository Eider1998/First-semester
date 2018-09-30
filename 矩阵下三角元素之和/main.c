#include<stdio.h>
int main(void)
{
    int i, j, *p, sum, a[10][10], n;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    p = &a[0][0];
    sum = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            sum += *p;
            p++;
        }
        p = &a[i + 1][0];
    }
    printf("%d\n", sum);
    return 0;
}
