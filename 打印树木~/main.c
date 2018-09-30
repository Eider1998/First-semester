#include<stdio.h>
int main(void)
{
    int i, n, j, k, d;

    scanf("%d", &n);
    for(i = 1; i <= 2 * (n - 1); i++)
    {
        printf(" ");
    }
    printf("*\n");
    for(i = 2; i <= n; i++)
    {
        for(j = 1; j <= 2 *(n - i); j++)
        {
            printf(" ");
        }
        printf("*");
        for(k = 1; k <= 4 * i - 5; k++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    d = 4 * n - 5;
    for(i = 1; i < n - 1; i++)
    {
        for(j = 1; j <= 2 * i; j++)
        {
            printf(" ");
        }
        printf("*");
        for(k = 1; k <= d - 4 * i; k++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(j = 1; j <= 2 * (n - 1); j++)
    {
        printf(" ");
    }
    printf("*\n");
    return 0;
}
