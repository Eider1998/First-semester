#include<stdio.h>
int main(void)
{
    int i, n, count[10000],a[10000], max, ans;

    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < 10000; i++)
        {
            count[i] = 0;
        }
        max = -1;
        for(i = 0; i < n; i++)
        {
            count[a[i]]++;
        }
        for(i = 0; i < 10000; i++)
        {
            if(max < count[i])
            {
                max = count[i];
                ans = i;
            }

        }
        printf("%d\n", ans);
    }
    return 0;
}
