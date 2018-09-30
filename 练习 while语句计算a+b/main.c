#include<stdio.h>
int main(void)
{
    int T,N;

    scanf("%d", &T);

       while(T--)
    {
        scanf("%d", &N);
        if(1000000%N==0)
        {
            printf("%d\n",1000000/N);
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
