#include<stdio.h>
int main(void)
{
    int i,n,flag=1;

    scanf("%d",&i);
    for(n = 2;n <= i-1;n++)
    {
        if(i % n == 0)
        {
          flag = 0;
        }

    }
    if(flag)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;

}
