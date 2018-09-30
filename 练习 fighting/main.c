#include<stdio.h>
int main(void)
{
    int i, n, a[100], m, t;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    while(m--)
    {
        t = a[n - 1];
        for(i = n - 2; i >= 0; i--)
        {
            a[i + 1] = a[i];
        }
        a[0] = t;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d%c", a[i], i == n - 1?'\n':' ');
    }
    return 0;
}
