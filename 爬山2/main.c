#include<stdio.h>
int main(void)
{
    int i, n, a[102][102], p, x, y, m, j, t;

    while(scanf("%d %d", &n, &m) != EOF)
    {
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        scanf("%d %d", &x, &y);
        p = a[1][1];
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m; j++)
            {
                if(p < a[i][j])
                {
                    p = a[i][j];
                }
            }
        }
        t = p - a[x][y];
        printf("%d\n", t);
    }
    return 0;
}
