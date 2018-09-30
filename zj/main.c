#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[80], str2[80];
    int i, n, k = 0;

    gets(str1);
    n = strlen(str1);
    memset(str2, 0, sizeof(str2));
    if(str1[0] >= '0' && str1[0] <= '9')
    {
        str2[k++] = str1[0];
    }
    else
    {
        str2[k++] = '*';
    }
    for(i = 1; i < n; i++)
    {
        if(str1[i] >= '0' && str1[i] <= '9')
        {
            str2[k++] = str1[i];
        }
        else
        {
            if(str2[k - 1] != '*')
            {
                str2[k++] = '*';
            }
        }
    }
    puts(str2);
    return 0;
}
