#include<stdio.h>
int main(void)
{
    double x, sum, ans;
    int i, n, sign;

    while(~scanf("%lf %d", &x, &n))
    {
        sum = x * x;
        ans = 1;
        sign = -1;
        for(i = 1; i <= n; i++)
        {
            sum = sum / ((2 * i) * (2 * i - 1));
            ans += sum * sign;
            sign = -sign;

        }
        printf("%.4lf\n", ans);
    }
    return 0;
}
