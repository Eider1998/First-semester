#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,temp;
    scanf("%d %d %d",&x,&y,&z);
    a=x+y;
    b=x+z;
    c=y+z;
    if(a>b)
    temp=a,a=b,b=temp;
    if(a>c)
    temp=a,a=c,c=temp;
    if(b>c)
    temp=b,b=c,c=temp;
    printf("%d\n",b);
    return 0;
}
