#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d\n",&x,&y,&z);
   if(z==0)
    printf("%d%d",y,x);
    else
    printf("%d%d%d",z,y,x);
    return 0;
}
