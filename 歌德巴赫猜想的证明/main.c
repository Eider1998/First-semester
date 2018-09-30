#include<stdio.h>
int is_prime(int x);
int main(void)
{
    int n, i;

    scanf("%d", &n);
    for(i = 3; i < n; i++)
    {
        if(is_prime(i) == 1 && i % 2 == 1 && is_prime(n - i) == 1 && (n - i) % 2 == 1)
        {
            printf("%d=%d+%d\n", n, i, n - i);
            break;
        }
    }
    return 0;
}
int is_prime(int x)
{
    int i;
    for(i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            break;
        }
    }
    if(i >= x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
