#include<stdio.h>
int main(void)
{
    int i, n, a[10000], w, j, k, t, m[10000];

    while(scanf("%d", &n) != EOF)
    {

        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n - 1; i++)
        {
             w = 0;
            for(j = i + 1; j < n; j++)
            {
                if(a[i] == a[j])
                {
                    w++;
                }
                m[i] = w;
            }
        }
        for(i = 0; i < n - 1; i++)
        {
            k = i;
            for(j = i + 1; j < n; j++)
            {
                if(m[i] > m[j])
                {
                    k = j;
                }
            }
            if(k != i)
            {
                t = m[i], m[i] = m[k], m[k] = t;
            }
        }
        for(i = 0; i < n - 1; i++)
        {
             w = 0;
            for(j = i + 1; j < n; j++)
            {
                if(a[i] == a[j])
                {
                    w++;
                }
                m[i] = w;
                if(m[i] == m[n - 1])
                {
                    printf("%d\n", a[i]);
                    break;
                }
            }
        }

    }
    return 0;
}
