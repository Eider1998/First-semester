#include<stdio.h>
int main(void)
{
    int y, m, r, i, n, s, j;


   while(scanf("%d", &n) != EOF)
   {
       for(j = 0; j < n; j++)
     {
       s = 0;
       scanf("%d %d %d", &y, &m, &r);
       if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
       {
          int b[]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
          for(i = 0; i < m; i++)
            {
                s += b[i];
            }
            s = s + r;
       }
       else
       {
           int a[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            for(i = 0; i < m; i++)
            {
                s += a[i];
            }
            s = s + r;

       }
       printf("%d\n", s);
     }
   }
    return 0;
}
