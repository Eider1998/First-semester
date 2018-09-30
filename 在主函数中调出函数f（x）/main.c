#include<stdio.h>
double f(double x)
{
    double y;
    y=2*x*x+5*x+3;
    return y;
}
int main()
{
    double a,y;
    scanf("%lf",&a);
    y=f(a);
    printf("a=%lf,y=%lf\n",a,y);
    return 0;
}
