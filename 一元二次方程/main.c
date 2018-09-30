#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c;
    double m,e,f,x,y;


    scanf("%d %d %d",&a,&b,&c);
    x=(b*b-4*a*c);
    y=sqrt(b*b-4*a*c);
    if(a==0&&x<0)
    {
        printf("不是一元二次方程\n");
    }
    else
    {
        if (x>0&&a!=0)
        {
            m=((-b)+x)/(2*a);
            e=((-b)-x)/(2*a);
            printf("%.2lf %.2lf\n",m,e);
        }
        if(x==0&&a!=0)
        {
            f=((-b)+x)/(2*a);
            printf("%.2lf\n",f);
        }
        if(x<0&&a!=0)
        {
            printf("不是一元二次函数");
        }
    }
    return 0;
}
