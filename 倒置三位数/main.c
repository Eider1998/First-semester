#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%10;
    c=a/10%10;
    d=a/100;
    e=b*100+c*10+d*1;
    printf("%d",e);
    return 0;
}
