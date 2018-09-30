#include<stdio.h>

struct stu1
{
    char name[1001], adr[1000];

}a[100001];

int main(void)
{
    int i, n, m, x;

    while(~scanf("%d", &n))
    {
        for(i = 0; i < n; i++)
        {
            scanf("%s %s", a[i].name, a[i].adr);
        }

        scanf("%d", &m);

        for(i = 0; i < m; i++)
        {
            scanf("%d", &x);
            printf("%s %s\n", a[x - 1].name, a[x - 1].adr);
        }
    }

            return 0;
}
