#include<stdio.h>
int main(void)
{
    int i, j, a[3][3], s = 0;

    for(i = 0;i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i + j == 2)
            {
                s += a[i][j];
            }
        }
    }
    printf("%d\n", s);
    return 0;
}
