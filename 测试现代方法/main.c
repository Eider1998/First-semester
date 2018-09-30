/*
#include<stdio.h>
#include<stdint.h>
typedef int Weekend;
int main(void)
{
    Weekend a[7];
    printf("%d\n", sizeof(a));
    return 0;
}

*/
/*
#include<stdio.h>
int f(int n);
int main(void)
{
    int a, t;

    a = 40;
    t = f(a);
    printf("%d\n", t);
    return 0;
}
int f(int n)
{
    int y;
    if(n == 1)
    {
        y = 0;
    }
    if(n == 2)
    {
        y = 1;
    }
    if(n > 2)
    {
        y = f(n - 1) + f(n - 2);
    }
    return y;
}

*/
/*
#include<stdio.h>
int main(void)
{
    char checker_board[8][8];
    int i, j;

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if((i + j) % 2 == 0)
            {
                checker_board[i][j] = 'B';
            }
            else
            {
                checker_board[i][j] = 'R';
            }
        }
    }
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            printf("%c%c", checker_board[i][j], j == 7?'\n':' ');
        }
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main(void)
{
    int a[5][5], i, j, sum1= 0, sum2 = 0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i == 0)
            {
                sum1 += a[i][j];
            }
            if(j == 0)
            {
                sum2 += a[i][j];
            }
        }
    }
    printf("%d %d\n", sum1, sum2);
    return 0;
}

*/

#include<stdio.h>
int main(void)
{

}
