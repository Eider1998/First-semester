#include<stdio.h>
void add(int a, int b);
int main(void)
{
    int c, d;

    scanf("%d %d", &c, &d);
    add(c, d);
    return 0;
}
void add(int a, int b)
{
    int sum;
    sum = a + b;
    printf("%d", sum);
}
