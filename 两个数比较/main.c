#include<stdio.h>
#include<math.h>
int main(void)
{
    int m, n, i, k, j, t, x, flag;

    scanf("%d", &t);
    while(t--)
    {
        j = 0;
        flag = 1;
        scanf("%d %d", &m, &n);
        if(m > n)
        {
            x = m, m = n, n = x;
        }
        for(i = m; i <= n; i++)
        {
            k = (int)sqrt(i);
            if(k * k == i)
            {
                j += i;
                flag = 0;
            }
        }
        if(flag)
        {
            j = 0;
        }
        printf("%d\n", j);
    }
    return 0;
}
