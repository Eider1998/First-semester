#include<stdio.h>
int main(void)
{
    int i, n, j, a[100], *p, *q, t;

    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(i = 0; i < n - 1; i++)
        {
           p = &a[0];
           q = &a[1];
               for(j = 0; j < n - i - 1; j++)
                {
                     if(*p > *q)
                  {
                     t = *q, *q = *p, *p = t;
                  }
                 p++;
                 q++;
               }

       }


        for(i = 0; i < n; i++)
        {
            printf("%d%c", a[i], i == n - 1?'\n':' ');
        }
    }
    return 0;
}
