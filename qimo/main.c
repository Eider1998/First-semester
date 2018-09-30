#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[1010], s[6] = "gaoshu";
    int i, n, flag, m, k;

    while(gets(str))
    {
        n = strlen(str);
        flag = 0;
        for(i = 0; i < n; ++i)
        {
            if(str[i] == s[0])
            {
                for(m = i + 1, k = 1; k <= 6 && m < n; ++k, ++m)
                {
                    if(str[m] != s[k])
                    {
                        break;
                    }
                }
                if(k == 6)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
        {
            printf("Good job!!!\n");
        }
        else
        {
            printf("QAQ\n");
        }
    }
    return 0;
}
