#include<stdio.h>
int main(void)
{
    int m, n, j, k, p, a[10][10], i, flag, I;

    scanf("%d %d", &m, &n);
    for(i = 0; i < m; i++)
    {
        for(j = 0;j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++)
    {
        k = 0;
        for(j = 0;j < n; j++)
        {
           if(a[i][k] < a[i][j])  // 每一行的最大值
           {
               k = j;
           }
        }
        flag = 1;
        for(p = 0; p < m; p++)
        {
            if(a[i][k] > a[p][k])  // 每一列的最小值
               {
                   flag = 0;
                   break;
               }
        }
        if(flag)
        {
            I = i;
            break;
        }
    }
    if(flag)
    {
        printf("Array[%d][%d]=%d\n", I, k, a[I][k]);
    }
    else
    {
        printf("None\n");
    }
    return 0;
}
