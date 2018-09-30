#include<stdio.h>
long fac(int k)
{
    int i;
    long f;

    for(i = 1, f = 1; i <= k; i++)
    {
        f *= i;
    }
    return f;
}
long cmn(int m, int n)
{
    long res;

    res = fac(m)/ (fac(n) * fac(m - n));
    return res;
}
long f(int n)
{
    long m;

    m = fac(m)/ (fac(m - n));
}
int main(void)
{
    int m, n;
    long t, ff;

  while ( ~scanf("%d %d", &m, &n))
   {
        t = cmn(m, n);
        ff = f(n);
        printf("%ld %ld\n", t, ff);
   }

    return 0;
}
