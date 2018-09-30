#include<stdio.h>
int main(void)
{
    int i,sum;
    sum = 0;

    while(scanf("%d",&i)!=EOF)
    {
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}
