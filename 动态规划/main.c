#include<stdio.h>

int sum[100001], a[100001];

int main(void)
{
    int i, j, n, m, max;

    while(~scanf("%d", &n))
    {
        for(i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);

            sum[i] = a[i];
        }

        for(i = 1; i <= n; i++)
        {
            m = 0;

            for(j = 1; j <= i; j++)
            {
                if(a[i] > a[j])
                {
                   if(m < sum[j])
                   {
                        sum[i] += sum[j];
                        m = sum[i];//用m保存住和，若依次上升则和肯定越来越大，否则，就加上最大的即可。
                   }
                }
            }

        }

        max = -1;

        for(i = 1; i <= n; i++)
        {
            if(max < sum[i])
            {
                max = sum[i];
            }
        }

        printf("%d\n", max);
    }

    return 0;
}
