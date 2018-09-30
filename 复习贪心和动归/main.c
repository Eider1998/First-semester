#include<stdio.h>

struct stu1
{
    int w, p;

}a[100001], t;

void sqort(struct stu1 a[], int n)
{
   int i, j, k;

   for(i = 0; i < n - 1; i++)
   {
      k = i;

      for(j = i + 1; j < n; j++)
      {
          if(a[j].w < a[k].w)
          {
              k = j;
          }

          if(a[j].w == a[k].w)
          {
              if(a[j].p > a[k].p)
              {
                  k = j;
              }
          }
      }

      if(k != i)
      {
          t = a[k], a[k] = a[i], a[i] = t;
      }
   }
}

int main(void)
{
    int n, i, w, m;

    while(~scanf("%d %d", &n, &m))
    {
        w = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &a[i].w, &a[i].p);
        }

        sqort(a, n);

        for(i = 0; i < m; i++)
        {
            w += a[i].p;
        }

        printf("%d\n", w);
    }

    return 0;
}
