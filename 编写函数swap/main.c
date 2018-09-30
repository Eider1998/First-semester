#include<stdio.h>
void swap(int a, int b)
{
    int t;

    printf("(2) a = %d, b = %d\n", a, b);
    t = a; a = b; b = t;
    printf("(3) a = %d, b = %d\n", a, b);
}
int main(void)
{
    int x = 10, y = 20;

    printf("(1) x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("(4) x = %d, y = %d\n", x, y);
    return 0;
}
