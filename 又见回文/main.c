#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100000], *p, *q;
    int n;

    while(gets(str) && strcmp(str, "2013"))
    {
        n = strlen(str);
        p = s;
        q = p + n - 1;
        while(p < q)
        {
            if(*p == ' ')
            {
                p++;
            }
           else if(*q == ' ')
            {
                q--;
            }
           else if(*q == *p)
           {
               q--;
               p++;
           }
           else
           {
               break;
           }
        }
        if(p < q)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
