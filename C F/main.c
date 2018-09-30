#include<stdio.h>
#include<string.h>
struct stu
{
    char str[100];
}p[100];
int main(void)
{
    char  a1[3] = "do", b1[3] = "re", c1[3] = "mi", d1[3] = "fa", a2[3] = "so", b2[3] = "la", c2[3] = "xi";
    int i, n, a[100];

    while(~scanf("%d", &n))
  {


    memset(a, 0, sizeof(a));
    for(i = 0; i <= n - 1; i++)
    {
        scanf("%s", p[i].str);
       if(strcmp(p[i].str, a1) == 0)
      {
        a[i] = 1;
      }
      if(strcmp(p[i].str, b1) == 0)
      {
        a[i] = 2;
      }
      if(strcmp(p[i].str, c1) == 0)
      {
        a[i] = 3;
      }
      if(strcmp(p[i].str, d1) == 0)
      {
        a[i] = 4;
      }
      if(strcmp(p[i].str, a2) == 0)
      {
        a[i] = 5;
      }
      if(strcmp(p[i].str, b2) == 0)
      {
        a[i] = 6;
      }
      if(strcmp(p[i].str, c2) == 0)
      {
        a[i] = 7;
      }
    }

    for(i = 0; i <= n - 1; i++)
    {
        printf("%d%c", a[i], i == n - 1?'\n':' ');
    }
  }
    return 0;
}
