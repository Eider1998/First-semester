#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[80];
    int i, n;

    gets(str);
    n = strlen(str);
    for(i = 0; i < n; i++)
    {
        if(str[i] > 64 && str[i] < 97)
        {
            strlwr(str[i]);
            printf("%c", str[i]);
        }
        if(str[i] > 96 && str[i] < 123)
        {
            strupr(str[i]);
            printf("%c", str[i]);
        }
    }
    return 0;
}
