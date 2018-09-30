#include<stdio.h>
int main(void)
{
    int a,n,i,max,fa,maxold;

    scanf("%d", &n);
    scanf("%d", &a);
    max = (a >= 0)?a:-a;
    maxold = a;


    for(i = 1;i < n;i++)
    {
        scanf("%d",&a);
        fa = a;
        if(a < 0)
        {
            fa = -a;
        }
        if(max < fa)
        {
            max = fa;
            maxold = a;
        }
    }
    printf("%d\n",maxold);
    return 0;
}
