#include<stdio.h>
int main(void)
{
    int i, j, a[5][5], *p;

     p = a[0];
     for(i = 0; i < 5; i++)
     {
         for(j = 0; j < 5; j++)
         {
             scanf("%d", &a[i][j]);
         }
     }
     for(i = 0; i < 5; i++)
     {
         for(j = 0; j < 5; j++)
         {
             printf("%d%c", *((p + i) + j), j == 4?'\n':' ');  //是错的 因为 p = [0]，已经让他在一行上去了， +i +j 也无用。
         }
     }
     return 0;
}
