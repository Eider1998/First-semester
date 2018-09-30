#include<stdio.h>
int main(void)
{
    int i, n, a[100], t, j;
    double ave;

    while(scanf("%d", &n) != EOF);
  {
        for(i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
     }
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
        if(n % 2 == 0)
       {
        ave = (a[n / 2] + a[(n / 2) - 1]) / 2.0;
       }
       else
      {
        ave = (double)a[(n - 1) / 2];
      }
    printf("%.1lf\n", ave);
  }

    return 0;
}
