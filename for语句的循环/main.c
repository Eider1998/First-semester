#include<stdio.h>
int main(void)
{
    int i,sum = 0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}
