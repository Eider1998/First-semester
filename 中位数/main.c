#include<stdio.h>
#include<string.h>
#include<memory.h>
int main(void)
{
    int i, n, s[n], t;
    double ave;

    while(scanf("%d",&n) != EOF)
    {
        for(i = 1; i <= n; i++)
        {
            scanf("%d",&s[i]);
        }
        for(i = 1; i <= n - 1; i++)
        {
            if(s[i] > s[i + 1])
            {
                t = s[i], s[i] = s[i + 1], s[i + 1] = t;
            }
        }
        if(n % 2 == 0)
        {
            ave = (s[n / 2] + s[(n / 2) + 1]) / 2.0;
        }

        else
        {
                ave = (double) s[(n + 1) / 2];
        }
        printf("%.1lf\n", ave);
    }
    return 0;
}
