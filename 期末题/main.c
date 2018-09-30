#include<stdio.h>
#include<string.h>
int main(void)
{
    int i, j, n, a[10010], m, w, b[10010], k;

    while(~scanf("%d", &n))
    {
        w = 0;
        k = 1;
        memset(b, -1, sizeof(b));
        for(i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 1; i <= n; i++)
        {
            if(a[i] > 0)
            {
                w++;
                b[k++] = a[i];
            }
        }

        if(w >= 2)
        {
            i = 1;
            j = w;
           while(i < j)
          {
           m = b[i], b[i] = b[j], b[j] = m;
           i++;
           j--;
          }
            printf("%d\n", w);
            for(i = 1; i <= w; i++)
            {
               printf("%d%c", b[i], i % 10 == 0?'\n':' ');
            }
        }
        else if(w == 1)
        {
            printf("%d\n", b[1]);
        }
        else
        {
            printf("0\n");
        }
        printf("\n");
    }
    printf("QAQ\n");
    return 0;
}
