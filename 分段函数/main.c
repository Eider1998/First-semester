#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double F(double x);
int main(void)
{
    int i, n;
    double m, a;

    while(scanf("%d", &n) != EOF)
    {
        for(i = 1; i <= n; i++)
        {
            scanf("%lf", &a);
            m = F(a);
            printf("%.2lf\n", m);
        }
    }
    return 0;
}
double F(double x)
{
    double y;

    if(x > 0 && x < 10)
    {
        y = log2(x);
    }
    if(x < 0)
    {
        y = abs(x) + sin(x);
    }
    if(x == 0)
    {
        y = 0;
    }
    if(x >= 10)
    {
        y = x * x;
    }
    return y;
}
