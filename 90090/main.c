#include<stdio.h>

int a[3000001];

int Bch(int a[], int left, int right, int k)
{
    int i = left, j = right, mid;

    while(i <= j)
    {
        mid = (i + j) / 2;

        if(a[mid] == k)
        {
            return mid;
        }

        else if(a[mid] > k)
        {
            return (Bch(a, left, mid - 1, k));
        }

        else
        {
            return (Bch(a, mid + 1, right, k));
        }
    }

    return -1;
}

int main(void)
{
    int n, i, q, x, t;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &q);

    for(i = 1; i <= q; i++)
    {
        scanf("%d", &x);
        t = Bch(a, 1, n, x);
        printf("%d\n", t);
    }

    return 0;
}
