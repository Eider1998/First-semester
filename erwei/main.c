#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[20][20], i, j, t, t1, t2, t3, t4, t5, t6£¬ min1;

    while(~scanf("%d %d", &n, &m))
    {
        min = 0;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(a[i][j] == 1)
                {
                    t1 = i;
                    t2 = j;
                }
                if(a[i][j] == 2)
                {
                    t3 = i;
                    t4 = j;
                }
                t = abs(t1 - t3);
                t5 = abs(t2 - t4);
                t6 = abs(t - t5);
                min1 = t6;
               break;
            }
        }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(a[i][j] == 1)
                {
                    t1 = i;
                    t2 = j;
                }
                if(a[i][j] == 2)
                {
                    t3 = i;
                    t4 = j;
                }
                t = abs(t1 - t3);
                t5 = abs(t2 - t4);
                t6 = abs(t - t5);
               if(t6 < min1)
               {
                   min1 = t6;
               }

            }
        }
        printf("%d\n", min1);
    }
    return 0;
}
