#include<stdio.h>
int main(void)
{
    int i, a, b, j, k;

    while(scanf("%d %d", &a, &b) != EOF)
    {
       for(i = 1; i <= b; i++)
       {
           for(j = 1; j <= b - i; j++)
           {
               printf(" ");
           }
          for(k = 1; k <= a; k++)
         {
               if((i == 1) ||(i == b))
           {
               printf("*%c", k == a?'\n':' ');
           }
           else
           {
               printf("*", k == a?)
           }
         }

       }

    }
    return 0;
}
