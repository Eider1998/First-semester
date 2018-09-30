
#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[10001], b[10001], str[10001];
    int i, l1, l2, j, flag = 1, k = 0;

    scanf("%s", a);
    getchar();

    gets(b);
    l1 = strlen(a);
    l2 = strlen(b);

    for(i = 0; i < l1; i++)
    {
        for(j = 0; j < l2; j++)
        {
            flag = 1;
            if(a[i] == b[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            str[k++] = a[i];
        }

    }

   puts(str);

    return 0;
}
