#include<stdio.h>

void hanoi(int n, char x, char y, char z)
{
    if(n == 1)
    {
        printf("Move disk %d from %c to %c\n", n, x, z);
    }

    else
    {
        hanoi(n - 1, x, z, y);

        printf("Move disk %d from %c to %c\n", n, x, z);

        hanoi(n - 1, y, x, z);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}
