#include<stdio.h>
int main(void)
{
    int i, n, m, a[500][500] = {{0}}, j, t, max, f, x, y,  z;

    while(scanf("%d %d",&n, &m) != EOF)
    {
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        scanf("%d %d", &x, &y);
        z = a[x][y];
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m - 1; j++)
            {
                if(a[i][j] > a[i][j + 1])
                {
                    t = a[i][j], a[i][j] = a[i][j + 1], a[i][j + 1] = t;
                }
            }
        }
           max = a[0][m];
            for(i = 1; i <= n; i++)
            {
                if(a[i][m] > max)
                {
                    max = a[i][m];
                }
            }
          f = max - z;
          printf("%d\n", f);
    }
    return 0;
}
