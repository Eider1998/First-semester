/*
#include<stdio.h>

int main(void)
{
    int n, h[40000], i, m, w;

    while(~scanf("%d", &n))
    {
        w = 1;

        for(i = 0; i < n; i++)
        {
            scanf("%d", &h[i]);
        }

        m = h[0];

        for(i = 1; i < n; i++)
        {
            if(m < h[i])
            {
                w++;
            }

            m = h[i];
        }

        printf("%d\n", w);
    }

    return 0;
}

*/

#include<stdio.h>  //2075—最少拦截系统
int main()
{   int n,i,j,h,m, a[10000];
    while(scanf("%d",&n)!=EOF)
        { for(i=0;i<n;i++)    scanf("%d",&a[i]);
          m=0;
          for(i=0;i<n;i++)
	         {    if(a[i]!=0)  //还没被拦截
                   {   h=a[i]; //拦下从a[i]开始，从大到小的数据—贪心（形成一个系统）
                       for(j=i+1;j<n;j++)
                          {   if(a[j]<=h&&a[j]!=0)  //还没被拦截
                                {       h=a[j];
                                        a[j]=0;  //被拦截
                                 }
                           }
                       m++;   //拦截系统计数
                     }
	            }
             printf("%d\n",m);
         }
       return 0;
   }
