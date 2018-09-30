#include<stdio.h>
int main(void)
{
    int i, n, j, k;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for(k = 1; k <= i; k++)
        {
            if(i != 1)
            {
                printf("%d ", k);
            }
            if(i == 1)
            {
                printf("1");
            }
        }
        for(k = i - 1; k > 0; k--)
        {
            if(k != 1)
            {
                printf("%d ", k);
            }
            if(k == 1)
            {
                printf("1");
            }
        }
        printf("*\n");
    }
    return 0;
}
