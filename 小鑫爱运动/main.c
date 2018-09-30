#include<stdio.h>
int main(void)
{
    int n, i, a[100], j, t, x, m;

    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        x = a[0];
        for(i = 0; i < n - 1; i++)
        {
            for(j = 0; j < n - 1 - i; j++)
            {
                if(a[j] > a[j + 1])
                {
                    t = a[j], a[j] = a[j + 1], a[j + 1] = t;
                }
            }
        }
        for(i = 0; i < n; i++)
        {
            if(x <= a[i])
            {
                m = i;
                break;
            }
        }
        printf("%d\n", m + 1);
    }
    return 0;
}
