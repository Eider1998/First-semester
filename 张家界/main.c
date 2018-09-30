

#include<stdio.h>
long long int cmn(int c)
{
    int i;
    long long int b = 1;

    for(i = 1; i <= c; i++)
    {
        b *= i;
    }

    return b;
}

long long int a(int x)
{
    int i;
    long long int q = 1;

    for(i = 1; i <= x; i++)
    {
        q *= i;
    }

    return q;
}
int main(void)
{
    int i, n, c, m;
    long long int b[1000], t1, t2;

    b[0] = 0; //不要忘记等于0，的情况
    b[1] = 0;  //b是利用错排
    b[2] = 1;

    for(i = 3; i <= 20; i++)
    {
        b[i] = (i - 1) * (b[i - 1] + b[i - 2]);
    }

    //因为有c-m的人找对了，所以求有多少人找对了的情况种类即可

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &c, &m);
        if(m == 1)   //不可能只有一个新郎找错
        {
            printf("0\n");
        }

        else if(m == 0)
        {
            printf("1\n");
        }
        else if(m == c)             //完全错排
        {
            printf("%lld\n", b[m]);
        }

        else if(m != c)
        {
           if(c - m == 1)
           {
               printf("%d\n", c);
           }
           else
           {
               t1 = cmn(c);
               t2 = a(c - m);
               printf("%lld\n", t1 / t2);
           }

        }

    }
     return 0;

}

/*

#include<stdio.h>
int main()
{
    int n, m, c, i;
    long long a[22], b[22];//b用来储存错排的，a用来储存不是错排的
    b[0] = 0;
    b[1] = 0;
    b[2] = 1;
    for(i = 3; i <= 20; i++)
    {
        b[i] = (i - 1) * (b[i-1] + b[i-2]);
    }
    a[0] = 1;
    a[1] = 3;
    for(i = 2; i <= 20; i++)
        a[i] = a[i - 1] + i + 1;
    scanf("%d", &c);
    while(c--)
    {
        scanf("%d%d", &n, &m);
       // if(m == 1) printf("0\n");
        if(n == m) printf("%lld\n", b[m]);
        if(n != m) printf("%lld\n", a[n - m]);
    }
    return 0;
}

*/
