#include<stdio.h>
int main(void)
{
    int m, n, i, a[100], t[100], x;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("\n%d", &m);
   for(i = 0; i < n; i++)
   {
        t[i] = a[i];
   }
   for(i = 0; i < m; i++)
   {
      a[i] = a[n - m + i] ;
   }
   x = a[n - 1 - m];
   t[n - 1] = x;
   for(i = 0; i < m; i++)
   {
       t[i + m] = t[i];
   }
   for(i = 0; i < m; i++)
   {
       printf("%d ", a[i]);
   }
   for(i = m; i < n - 1; i++)
   {
       printf("%d ", t[i]);
   }
   printf("%d\n", t[n - 1]);
   return 0;
}
