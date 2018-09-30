#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[6];
    int i, n;

    getchar();
    gets(str);
    n = strlen(str);
    for(i = 0; i < n; i++)
    {
        str[i] += 4;
    }
    printf("password is ");
    puts(str);
    return 0;
}
