#include<stdio.h>
int main(void)
{
    int i, m, flag;
    double x, sum, ans;

    while(~scanf("%lf %d", &x, &m))
    {
        sum = x;
        ans = x;
        flag = -1;
        for(i = 2; i <= m; i++)
        {
            sum = sum * (x * x) / ((2 * i - 1) * (2 * i - 2));
            ans += flag * sum;
            flag = -flag;
        }
        printf("%.4lf\n", ans);
    }
    return 0;
}
