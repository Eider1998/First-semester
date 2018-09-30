#include<stdio.h>
int kp(int a[], int low, int high)
{
    int x = a[low];

    while(low < high)
    {
        while(low < high && a[high] >= x)
        {
            high--;
        }
        a[low] = a[high];
        while(low < high && a[low] <= x)
        {
            low++;
        }
        a[high] = a[low];
    }
    a[low] = x;
    return low;
}
void kkp(int a[], int left, int right)
{
    int m;

    if(left < right)
    {
        m = kp(a, left, right);
        kkp(a, left, m - 1);
        kkp(a, m + 1, right);
    }
}
int main(void)
{
    int i, a[100005], n, m, x;

    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        kkp(a, 0, n - 1);
        scanf("%d", &m);
        for(i = 0; i < m; i++)
        {
            scanf("%d", &x);
            printf("%d\n", a[n - x]);
        }

    }
    return 0;
}
