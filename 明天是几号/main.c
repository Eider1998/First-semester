#include<stdio.h>
int main(void)
{
    int m, n, a, b, c, i, flag, s;

    while(scanf("%d %d", &m, &n) != EOF)
    {
        flag = 1;
        s = 1;
        for(i = m; i <= n; i++)
        {
            a = i % 10;
            b = i / 100;
            c = i / 10 % 10;
            if(i == a * a * a + b * b * b + c * c * c)
            {
                flag = 0;
                if(s)
                {
                    printf("%d", i);
                    s = 0;
                }
                else
                {
                    printf(" ");
                    printf("%d", i);
                }


            }
        }
        if(flag)
        {
            printf("no\n");
        }
    }
    return 0;
}
