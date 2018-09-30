#include<stdio.h>
int main()
{
    int t, n, i, j, b, count1, m;
    int a[101];
    scanf("%d", &t);
    b = 0;
    while(b < t)
    {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        count1 = 0;
        for(i = 0; i < n - 1; i++)
        {
            for(j = 0; j < n - 1 - i; j++)
            {
                if(a[j] > a[j + 1])
                {
                    m = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = m;
                    count1++;
                }
            }
        }
        printf("%d\n", count1);
        b++;
    }
    return 0;
}
