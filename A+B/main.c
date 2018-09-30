#include<stdio.h>
int main(void)
{
    int a, b, sum;

    while(scanf("%d %d", &a, &b) && (a || b))
    {
        sum = a + b;
        printf("%d\n", sum);
        printf("\n");
    }
    return 0;
}
