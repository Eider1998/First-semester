#include<stdio.h>
int main(void)
{
    int t, i, n, j, a[100][100] = {{0}}, f, q, m;
    q = 1;

    scanf("%d", &t);
    for(f = 0; f < t; f++)
    {
        scanf("%d %d", &m, &n);
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Case #%d:\n", q);
        q++;
        for(i = 0; i < m; i++)
        {
            for(j = n - 1; j >= 0; j--)
            {
                printf("%d%c", a[j][i], j == 0?'\n':' ');
            }
        }

    }
    return 0;
}
