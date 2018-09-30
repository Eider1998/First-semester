#include<stdio.h>
int main(void)
{
    int n, s[9], max, min, t1, t2;

    scanf("%d", &n);
    for(i = 0; i <= n - 1; i++)
    {
        scanf("%d", &s[i]);
    }
    max = s[0];
    min = s[0];
    if(max < s[i])
    {
        max = s[i];
        t1 = i;
    }
    if(min > s[i])
    {
        min = s[i];
        t2 = s[i];
    }
    for(i = 0; i <= n - 1; i++)
    {
        ptintf("%d%c", s[i], i == n - i?'\n':' ');
    }
    return 0;

}
