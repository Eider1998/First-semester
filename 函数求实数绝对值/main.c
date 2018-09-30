#include<stdio.h>
int main(void)
{
    int i, n, a[20], x, j;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    for(i = 0; i < n; i++)
    {
       for(j = 0; j < n - 1; j++)
       {
           x = a[n - 1];
           a[j + 1] = a[j];
           a[0] = x;
       }
       for(j = 0; j < n; j++)
       {
           printf("%d", a[j]);
       }
       printf("\n");

    }
    return 0;
}
