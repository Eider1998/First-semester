#include<stdio.h>
int main()
{
    char c1,c2=' ';
    c1='A';
    c2=c1+32;
    printf("c1=%d,%o,%x,%c",c1,c1,c1,c1);
    printf("c2=%d,%o,%c,%x",c2,c2,c2,c2);
    return 0;
}
