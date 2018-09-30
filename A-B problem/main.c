#include<stdio.h>
int main(void)
{
    int x1, x2, a, b, r, w;

    while(scanf("%d %d", &x1, &x2) != EOF)
    {
        w = 0;
        if(x1 > x2)
        {
            a = x1;
            b = x2;
        }
        else
        {
            a = x2;
            b = x1;
        }
        while((a != 1) || (b != 1))
        {
           r = a - b;
           if(b > r)
           {
               a = b;
               b = r;
           }
           else
           {
               a = r;
               b = b;
           }
            w++;
        }
        printf("%d\n", w);

    }
    return 0;
}
