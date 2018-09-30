#include<stdio.h>
int main(void)
{
    int a,b,x,y;

    scanf("%d:%d",&a,&b);
    if(a>12)
    {
        x=a-12;
        y=b;
        printf("%d:%02d PM\n",x,y);
    }
   else if(a==0)
    {
        x=12;
        y=b;
        printf("%d:%02d AM\n",x,y);
    }
   else if(a==12)
    {
        x=12;
        y=b;
        printf("%d:%02d PM\n",x,y);
    }
    else
    {
        printf("%d:%02d AM\n",a,b);
    }
    return 0;
}
