#include<stdio.h>
int main(void)
{
    int n, i, a[100], ave, j, t, s, x, y, z;


    while (scanf("%d", &n)!= EOF)
  {
        x = 0;
        y = 0;
        z = 0;
        s = 0;
        for(i = 0; i <= n - 1; i++)
     {
        scanf("%d", &a[i]);
        s += a[i];
     }
        ave = s / n;
       for(i = 0; i <= n - 2; i++)
     {
        for(j = i + 1; j <= n - 1; j++)
        {
            if(a[i] > a[j])
            {
                t = a[i], a[i] = a[j], a[j] = t;
            }
        }
     }
    for(i = 0; i < n; i++)
    {
        if(a[i] < ave)
      {
         x++;
      }
       if(a[i] == ave)
      {
         y++;
      }
      if(a[i] > ave)
      {
         z++;
      }
    }
    printf("%d %d %d\n", x, y, z);

  }
    return 0;
}
