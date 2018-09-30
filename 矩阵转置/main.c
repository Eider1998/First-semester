#include<stdio.h>
int main(void)
{
    int a[3][4] = {{8, 1, 6, 7}, {3, 5, 7, 8}, {4, 7, 2, 5}};
    int b[4][3], i, j;

    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            printf("%5d", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <= 2; j++)
        {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
