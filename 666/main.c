#include<stdio.h>
int is_prime(int n);
int main(void)
{
    int a, i;

    scanf("%d", &a);
    for(i = 3; i <= a; i++)
    {
        if(is_prime(i) == 1 && is_prime(a - i) == 1)
        {
            break;
        }
    }
    printf("%d=%d+%d\n",a, i, a - i);
    return 0;
}
int is_prime(int n)
{
    int  i, flag;
    flag = 1;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
