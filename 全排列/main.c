#include<stdio.h>

void Swap(int *p, int *q)
{
    int temp = *p;

    *p = *q;

    *q = temp;
}

void Perm(int a[], int k, int m)
{
    int i;

    if(k == m)
    {
        for(i = 0; i <= m; i++)
        {
            printf("%d%c", a[i], i == m?'\n':',');
        }

    }

    else
    {
        for(i = k; i <= m; i++)
        {
            Swap(&a[k], &a[i]);
            Perm(a, k + 1, m);
            Swap(&a[k], &a[i]);
        }
    }
}

int main(void)
{
    int i, n, array[10], t;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
      for(i = 0; i < n; i++)
      {
        scanf("%d", &array[i]);
      }

    Perm(array, 0, n - 1);

    }


    return 0;
}
