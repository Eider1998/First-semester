#include<stdio.h>
int main(void)
{
    int a,b,c;

    scanf("%d:%d",&a,&b);
    if((a<12)&&(a!=0))
    {
        c=a;
        printf("%d:%02d AM\n",c,b);
    }
    if(a==12)
    {
        c=a;
        printf("%d:%02d PM\n",c,b);
    }
    if(a>12)
    {
        c=a-12;
        printf("%d:%02d PM\n",c,b);
    }
    if(a==0)
    {
        c=12;
        printf("%d:%02d AM\n",c,b);
    }
    return 0;
}
