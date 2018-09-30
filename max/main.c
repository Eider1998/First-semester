#include<stdio.h>
int main()
{
    int max(int x,int y);
    int a,b,c;
    c=max(a,b);
    scanf("%d,%d",&a,&b);
    printf("max= %d\n",c);
    return 0;
}
int max(int x,int y)
{
    int z;
    if(x>y)z=x;
    else z=y;
    return (z);
}
