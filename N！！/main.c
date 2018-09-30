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
long f(int m, int n)
{
    long q;

    q = fac(m)/ (fac(m - n));
    return q;
}
int main(void)
{
    int m, n;
    long t, ff;

  while ( ~scanf("%d %d", &m, &n))
   {

        ff = f(m, n);
        t = cmn(m, n);
        printf("%ld %ld\n", t, ff);
   }

    return 0;
}
