#include<stdio.h>
#include<string.h>

int a[101][101], num[101];

void warshall(int n)
{
   int i, j, k;

   for(i = 1; i <= n; i++)
   {
       for(j = 1; j <= n; j++)
       {
           if(a[j][i])
           {
               for(k = 1; k <= n; k++)
               {
                   a[j][k] = a[j][k] + a[i][k];
                   if(a[j][k] >= 1)
                   {
                       a[j][k] = 1;
                   }
               }
           }
       }
   }
}
int main(void)
{
    int i, j, m, n, ans, x, y;

    while(~scanf("%d %d", &n, &m))
    {
        memset(a, 0, sizeof(a));
        memset(num, 1, sizeof(num));
        ans = 0;

        for(i = 1; i <= m; i++)
        {
            scanf("%d %d", &x, &y);
            a[x][y] = 1;
        }

        warshall(n);

        for(j = 1; j <= n; j++)
        {
            for(i = 1; i <= n; i++)
            {
                if(i == j)
                {
                    if(a[i][j])
                    {
                        num[j] = 0;
                        break;
                    }
                }
                    else if(!a[i][j])
                    {
                        if(!a[j][i])
                        {
                            num[j] = 0;
                            break;
                        }
                    }

            }

            if(num[j])
            {
                ans++;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
