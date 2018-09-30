#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

int main (void)
{
    int s, i, j, k, m, n, x, y;
    int a[200000],b[200000],c[200000];

    scanf("%d", &s);
    for(k = 1; k <= 200000;i++)
    {
        for(i = 0; i <= 200000;i++)
        {
            a[i]=0;
            b[i]=0;
            c[i]=0;
        }
        scanf("%d", &n);
        for(i = 1; i <= n;i++)
        {
            scanf("%d", &a[i]);
            b[i]=b[i-1]+a[i];
        }
        scanf("%d", &m);
        for(j= 1;j<=m;j++)
        {
            scanf("%d%d", &x,&y);
            printf("%d\n",b[y]-b[x-1]);
        }
    }
    return 0;
}

