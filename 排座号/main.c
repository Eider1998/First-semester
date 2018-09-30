#include<stdio.h>
#define PI 10000
int main(void)
{
    int i, n, a[PI][10] = {{0}},j, m, temp;

    while(scanf("%d %d", &n, &m) != EOF)
    {
        temp = 1;
        for(i = 0; i < n; i++)
            {
                for(j = 0; j < m; j++)
                {
                    a[j][i] = temp;
                    temp++;
                }
            }
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < m; j++)
                {
                    printf("%d%c", a[j][i], j == m - 1?'\n':' ');
                }
            }
    }
    return 0;
}
