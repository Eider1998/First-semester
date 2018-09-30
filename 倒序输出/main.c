#include<stdio.h>
int main(void)
{
    int i, t, a[10], j;
    long n;

    scanf("%ld", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    i = 0;
    j = n - 1;
    while(j > i)
    {
        t = a[j], a[j] = a[i],a[i] = t;
        i++;
        j--;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d%c", a[i], i == n - 1?'\n':' ');
    }
    return 0;
}
