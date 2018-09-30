#include<stdio.h>
double fac(int k);
double cmn(int m, int n);
int main(void)
{
    int m, n;
    double t;

    scanf("%d %d", &m, &n);
    t = cmn(m, n);
    printf("%lf\n", t);
    return 0;
}
double cmn(int m, int n)
{
    double res;

    res = fac(m)/(fac(n) * fac(m - n));
    return res;
}
double fac(int k)
{
    int i;
    double f;

    for(i = 1, f = 1; i <= k; i++)
    {
        f *= i;
    }
    return f;
}
