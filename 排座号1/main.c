#include<stdio.h>
int main(void)
{
    int i, n, j, a[11][11], p, m, t, q;

    while(scanf("%d %d", &n, &m) != EOF)
    {
        p = 1;
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                a[j][i] = p;
                p++;
            }
        }


        q = 1;
        while(q % 2 != 0 && q <= m - 1)
        {
           for(j = 0; j < n - 1; j++)
           {
               for(i = 0; i < n - 1 - j; i++)
             {
                if(a[i][q] < a[i + 1][q])
                {
                    t = a[i][q], a[i][q] = a[i + 1][q], a[i + 1][q] = t;
                }
             }
           }

            q += 2;

        }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                printf("%02d%c", a[i][j], j == m - 1?'\n':' ');
            }

    }

}
 return 0;
}
