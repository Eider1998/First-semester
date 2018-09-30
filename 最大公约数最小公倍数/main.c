#include<stdio.h>
int main(void)
{
    int i, a[10], j, k, b[10];

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        b[i] = i;
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                k = a[j], a[j] = a[j + 1], a[j + 1] = k;
                k = b[j], b[j] = b[j + 1], b[j + 1] = k;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d%c", a[i], i == n - 1?'\n':' ');
    }
     for(i = 0; i < n; i++)
    {
        printf("%d%c", b[i]+ 1, i == n - 1?'\n':' ');
    }
    return 0;
}
