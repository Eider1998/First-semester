#include<stdio.h>
int main(void)
{
    int a,b,c,d;

    printf("input m and n(>0)\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=a,a=b,b=c;
    }
    while(d!= 0)
    {
        d=a % b,a=b,b=d;
    }
    printf("%d\n",d);
    return 0;
}
