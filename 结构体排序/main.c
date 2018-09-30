#include<stdio.h>

struct stu
{
    int Wi, Pi;
}p[100001], t;

int main(void)
{
    int n, i, j;

    while(~scanf("%d", &n))
    {
        for(i = 0; i < n; i++)
        {
            /* scanf("%d %d", &p[i].Wi, &p[i].Pi); */
             //注意这种输出是错误的

             scanf("%d", &p[i].Wi);
        }
        for(i = 0; i < n; i++)
        {
            scanf("%d", &p[i].Pi);
        }


        for(i = 0; i < n - 1; i++)
        {
            for(j = 0; j < n - 1 - i; j++)
            {
                if(p[j].Wi > p[j + 1].Wi)
                {
                    t = p[j], p[j] = p[j + 1], p[j + 1] = t;
                }

                if(p[j].Wi == p[j + 1].Wi)
                {
                    if(p[j].Pi < p[j + 1].Pi)
                    {
                         t = p[j], p[j] = p[j + 1], p[j + 1] = t;
                    }
                }
            }
        }

        for(i = 0; i < n; i++)
        {
            printf("%d %d\n", p[i].Wi, p[i].Pi);
        }
    }

    return 0;
}
