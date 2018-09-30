#include<stdio.h>
int main(void)
{
    int i, n, j, k;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for(k = 1; k <= (2 * i) - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = n - 1; i >= 1; i--)
    {
        for(j = i; j < n; j++)
        {
            printf(" ");
        }
        for(k = n - i + 1; k < n + i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
