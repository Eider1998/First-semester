#include<stdio.h>
int main(void)
{
    int t, a;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &a);
        if(1000000 % a == 0)
        {
            printf("%d\n",1000000 / a);
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
