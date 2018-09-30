#include<stdio.h>
#define N 10
int Binsearch(int a[], int n, int x)
{
    int s = 0, t = n - 1;
    int mid;
    while(s <= t)
    {
        mid = (s + t) / 2;
        if(a[mid] == x)
        {
            return mid;
        }
        if(a[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            t = mid - 1;
        }
    }
    return -1;
}
int main(void)
{
    int m, key;
    int a[N] ={10, 15, 26, 36, 45, 60, 72, 80, 85, 96};

    while(scanf("%d", &key) != EOF)
    {
        m = Binsearch(a, N, key);
        if(m == -1)
        {
            printf("Not Found!\n");
        }
        else
        {
            printf("%d\n", m);
        }
    }
    return 0;
}
