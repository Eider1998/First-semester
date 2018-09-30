#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[1000], p;
    int i, n;

    while(gets(str))
    {
        n = strlen(str);
        scanf("%c", &p);
        for(i = 0; i < n; i++)
        {
            if(str[i] == p)
            {
                printf("\n");
            }
            if(str[i] != p)
            {
                 printf("%c", str[i]);
            }
        }
        printf("\n");
    }
   return 0;
}
