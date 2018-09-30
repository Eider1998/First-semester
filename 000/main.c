#include<stdio.h>
int main(void)
{
    int n, a, b, c;

    while(~scanf("%d", &n))
    {
        a = n * 0.1;
        b = a + n * 0.2;
        c = b + n * 0.3;
        printf("%d\n", c);
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
