#include<stdio.h>
int main()
{
    int n , m ,k,i, j,num,flat,flag ;
    int a[10010],b[10010];
    int c[10010],d[10010];
    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
    {
        for(i = 0;i<n;i++)
            scanf("%d",&a[i]);
        for(j = 0;j<m;j++)
            scanf("%d",&b[j]);
        for(i = 0;i<k;i++)
            scanf("%d %d",&c[i],&d[i]);
            num = 0 ; flag = 0;
        for(i = 0;i<m;i++)
        {
            for(j = 0;j<k;j++)
            {
                if(b[i]==d[j])
                {
                    num++;
                    break;
                }
            }
        }
        if(num==m)
            flag = 1;
        num = 0;flat = 0;
        for(i = 0;i<n;i++)
        {
            for(j = 0;j<k;j++)
            {
                if(a[i]==c[j])
                {
                    num++;
                    break;
                }
            }
        }
        if(num<n||num==n)
            flat = 1;
        if(flag&&flat)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
