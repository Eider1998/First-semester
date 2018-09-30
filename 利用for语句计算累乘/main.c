#include<stdio.h>
int main(void)
{
    int i,mul,n;
    mul=1;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul *= i;
    }
    printf("%d\n",mul);
    return 0;
}
