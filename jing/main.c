#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100];
    int i, n, j, flag = 1;

    gets(str);
    n = strlen(str);
    i = 0;
    j = n - i - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
