#include<stdio.h>
#define N 10000
int main(void)
{
    int i, n, max, ans;
    int a[N], count[N];

    while(~scanf("%d", &n))
    {
        for(i = 0; i < 10001; i++)
        {
            count[i] = 0;
        }
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        max = -1;
        for(i = 0; i < n; i++)
        {
            count[a[i]]++;
        }
        for(i = 0; i < 10001; i++)
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
