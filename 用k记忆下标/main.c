#include<stdio.h>
int main(void)
{
    int n, i, j, a[100], t, k;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        k = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[k] > a[j])
            {
                k = j;
            }
        }
        if(k != i)
        {
            t = a[i], a[i] = a[k], a[k] = t;
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d%c", a[i],i == n - 1?'\n':' ');
    }
    return 0;
}
