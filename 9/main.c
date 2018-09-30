#include<stdio.h>
int main()
{
    int i=10,j=8,m=11,n=20,k;
    printf("i=%3d\tj=%3d\t",i++,++j);
    printf("i=%3d\tj=%3d\t",i,j);
    k=m++;
    printf("k=%3d\t",k);
    printf("m=%3d\n",m);
    k=3*(++n);
    printf("k=%3d\t",k);
    printf("n=%3d\n",n);
    return 0;
}
