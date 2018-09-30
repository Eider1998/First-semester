#include<stdio.h>
#include<stdlib.h>
double fabs(double x);
int main(void)
{
    double m, t;

   while (scanf("%lf", &m) != EOF)
   {
       t = fabs(m);
       printf("%.2lf\n", t);
   }
    return 0;

}
double fabs(double x)
{
    double t;

    t = abs(x);
    return t;
}
