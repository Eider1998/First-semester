#include<stdio.h>
int main()
{
int b,d,i,j,n,m,a;

scanf("%d",&n);
for(j = 1;j <= 2 * (n - 1); j++)
{
printf(" ");
}
printf("*\n");
for(i = 2; i <= n; i++)
{
for(j = 1;j <= 2 * (n - i); j++)
{
printf(" ");
}
printf("*");
for(b = 1;b <= 4 * i - 5; b++)
{printf(" ");}
printf("*\n");
}/*ÉÏÈý½Ç*/

d = 4 * n - 5;
for(i = 1;i < (n - 1); i++)
{
for(j = 1;j <= 2 * i; j++)
{
printf(" ");
}
printf("*");
for(a = 1;a <= d - 4 * i; a++)
{
printf(" ");
}
printf("*\n");
}

for(j = 1;j <= 2 * ( n - 1); j++)
{
printf(" ");
}
printf("*\n");
return 0;
}
