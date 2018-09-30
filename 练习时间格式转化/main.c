#include<stdio.h>
int main(void)
{
    int x,y,a,b;

    scanf("%d %d",&a,&b);
    if(a<12&&a!=0)
    {
        x=a;
        y=b;
        printf("%d:%02d AM\n",x,y);
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
    if(a>12)
    {
        x=a-12;
        y=b;
        printf("%d:%02d PM\n",x,y);
    }
    return 0;
}
