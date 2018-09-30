#include<stdio.h>
int main(void)
{
    int m, i, j;
    long long n;
    double x, y, t, f, p;

    while(~scanf("%lf %d", &x, &m))
    {
        y = 0.0;
        n = 1;
        i = -1;
        f = x;
        p = x;
        if(m > 1)
        {
             for(j = 2; j <= m; j++)
             {
                 n *= (2 * j - 1) * (2 * j - 2);
                 t = p * p;
                 x *= t;
                 y += i * (x / n);
                 i = -i;
             }

        }
        if(m > 1)
        {
            printf("%.4lf\n", y + f);
        }
        if(m == 1)
        {
            printf("%.4lf\n", f);
        }

    }
    return 0;
}
