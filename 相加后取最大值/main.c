#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int t,h1,h2,t1,t2,m1,m2,t3,t4,a,b,c;

   scanf("%02d:%02d:%02d\n",&h1,&t3,&m1);
   scanf("%02d:%02d:%02d",&h2,&t4,&m2);
   t1=h1*3600+t3*60+m1*1;
   t2=h2*3600+t4*60+m1*1;
   t=abs(t1-t2);
   a=t/3600;
   b=t%3600/60;
   c=t%3600%60;
   printf("%02d:%02d:%02d",a,b,c);
   return 0;
}
