#include<stdio.h>
int main(void)
{
    int n, a, b, c;

    while(~scanf("%d", &n))
    {
        a = 0.1 * n;
        if(a + 0.9 * n != n)
        {
            a += 1;
        }
        b = (n - a) * 0.2;
        if(b + 0.8 *  (n - a) != n - a)
        {
            b += 1£»
        }
        c = (n - a - b) * 0.3;
        if(c + 0.7 * (n - a - b) != n - a - b)
        {
            c += 1;
        }
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
