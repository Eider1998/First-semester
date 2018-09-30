#include<stdio.h>
int main(void)
{
    int a[10], i, k, t, j;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 9; i++)
    {
        k = i;
        for(j = i + 1; j < 10; j++)
        {
            if(a[k] > a[j])
            {
                k = j;
            }
        }
           if(k != i)
        {
            t = a[k], a[k] = a[i], a[i] = t;
            printf("%d",k);
        }
    }
       for(i = 0; i < 10; i++)
        {
           printf("%d%c", a[i], i == 9?'\n':' ');
        }
    return 0;
}
