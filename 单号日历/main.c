#include<stdio.h>
int main(void)
{
    int i, a, b, x;

    scanf("%d %d", &a, &b);
    x = b;
    for(i = 1; i <= a; i++)
    {
        if(i < x)
        {
            printf("\t");
        }
    }
    for(i = 1; i <= a; i++, b++)
    {
            printf("%d%c", i, b % 7 == 0?'\n':'\t');
    }
    return 0;
}
