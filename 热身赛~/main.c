#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


char str[100001][100];


int main(void)
{
    int a[100];


    long c, b, y, d, w = 0, t, i, j;


    scanf("%ld", &y);
    c = abs(y);
    b = c;
    d = c;
    while(b / 10)
    {
        b = b / 10;
        w++;
    }


    w += 1;


    for(i = 0; i < w - 1; i++)
    {
        if(d / 10)
        {
            a[i] = c % 10;
            d = d / 10;
        }
    }


    a[w - 1] = d;


    i = 0; j = w - 1;


    while(i < j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }


    for(i = 0; i < w; i++)
  {
         if(a[i] == 0)
    {
        strcpy(str[i], "ling");
    }


    if(a[i] == 1)
    {
        strcpy(str[i], "yi");
    }


    if(a[i] == 2)
    {
        strcpy(str[i], "er");
    }


    if(a[i] == 3)
    {
        strcpy(str[i], "san");
    }


    if(a[i] == 4)
    {
        strcpy(str[i], "si");
    }


    if(a[i] == 5)
    {
        strcpy(str[i], "wu");
    }


    if(a[i] == 6)
    {
        strcpy(str[i], "liu");
    }


    if(a[i] == 7)
    {
        strcpy(str[i], "qi");
    }


    if(a[i] == 8)
    {
        strcpy(str[i], "ba");
    }


    if(a[i] == 9)
    {
        strcpy(str[i], "jiu");
    }
  }


  if(y < 0)
  {
      printf("fu ");


      for(i = 0; i < w - 1; i++)
      {
          printf("%s ", str[i]);
      }


      printf("%s\n", str[w - 1]);
  }


  if(y > 0)
  {
      for(i = 0; i < w - 1; i++)
      {
          printf("%s ", str[i]);
      }


      printf("%s\n", str[w - 1]);
  }


  if(y == 0)
  {
      printf("ling\n");
  }


    return 0;
}
