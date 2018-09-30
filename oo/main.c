#include<stdio.h>
#include<string.h>
#define  MAX 100005
int dp[MAX][12],a[MAX],b[MAX];
int max_1(int a,int b,int c,int d)
{
    int max1,max2;
    max1=a+b>a+c?a+b:a+c;
    max2=max1>a+d?max1:a+d;
    return max2;
}
int max_2(int a,int b,int c)
{
    return a+b>a+c?a+b:a+c;
}
int main()
{
    int n,i,j;
    while(scanf("%d",&n),n)
    {
        int max=-999999;
        memset(dp,0,sizeof(dp));
        for(i=1;i<=n;i++){
            scanf("%d %d",&a[i],&b[i]);
            dp[b[i]][a[i]]+=1;
            max=max>b[i]?max:b[i];
        }

        for(i=max;i>=0;i--)
        {
            if(i<=4)
            {
                for(j=5-i;j<=5+i;j++)
                {
                    dp[i][j]=max_1(dp[i][j],dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]);

                }

            }
            else
            {
                for(j=0;j<=10;j++)
                {
                    if(j==0)
                    {
                        dp[i][j]=max_2(dp[i][j],dp[i+1][j],dp[i+1][j+1]);
                    }
                    else if(j==10)
                    {
                        dp[i][j]=max_2(dp[i][j],dp[i+1][j-1],dp[i+1][j]);
                    }
                    else
                    {
                        dp[i][j]=max_1(dp[i][j],dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]);
                    }
                }
            }
        }
        printf("%d\n",dp[0][5]);

    }
    return 0;
}
