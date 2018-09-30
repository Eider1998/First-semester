#include<stdio.h>
int main(void)
{
    int i = 1,sum = 0,n;

    scanf("%d",&n);
    while(i<=0)
    {
        sum = sum + i;
    i--;
    }
    printf("sum = %d\n",sum);
    return 0;
}
