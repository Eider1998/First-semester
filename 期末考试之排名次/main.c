#include<stdio.h>
int main(void)
{
    int i, n, a[100], b[100], c[100], d[100], k, j, t;

    for(i = 0; i < 101; i++)
    {
        d[i] = 0;
    }
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
        d[i] = a[i] + b[i] + c[i];
    }
    for(i = 0; i < n - 1; i++)
    {
        k = i;
        for(j = i + 1; j < n; j++)
        {
            if(d[k] < d[j])
            {
               k = j;
            }
        }
         if(k != j)
        {
             t = d[k], d[k] = d[i], d[i] = t;
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d\n", d[i]);
    }
    return 0;
}
