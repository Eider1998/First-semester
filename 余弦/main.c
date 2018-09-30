#include<stdio.h>
int main(void)
{
    int a, b, i, j, k;

    while(~scanf("%d %d", &a, &b))
    {
        for(i = 1; i <= b; i++)
        {
            if((i == 1) || (i == b))
            {
                for(j = i; j <= b - 1; j++)
                {
                    printf(" ");
                }
                for(k = 1; k <= a; k++)
                {
                    printf("*%c", k == a?'\n':' ');
                }
            }
            else
            {
                for(j = i; j <= b - 1; j++)
                {
                    printf(" ");
                }
                for(k = 1; k <= a + a - 2; k++)
                {
                    if(k == 1)
                    {
                        printf("*");
                    }
                    if(k == a + a - 2)
                    {
                        printf("*\n");
                    }
                    else
                    {
                        printf(" ");
                    }

                }
            }
        }
    }
    return 0;
}
