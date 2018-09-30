#include<stdio.h>

int main(void)
{
    int i, n;

    long long int f[100];

    while(scanf("%d", &n) && n != 0)
    {
        f[1] = 1;
        f[2] = 2;
        f[3] = 3;

        for(i = 4; i <= n; i++)
        {
            f[i] = f[i - 1] + f[i - 3];
        }

        printf("%lld\n", f[n]);
    }

    return 0;
}
