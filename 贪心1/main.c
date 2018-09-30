
#include<stdio.h>

struct stu
{
    int f, m;
    double b;

}a[10000];

void sqort(struct stu a[], int l, int r)
{
    int i = l, j = r;
    struct stu key = a[l];

    while(l >= r)
    {
        return ;
    }

    while(i < j)
    {
        while(i < j && a[j].b >= key.b)
        {
            j--;
        }

        a[i] = a[j];

        while(i < j && a[i].b <= key.b)
        {
            i++;
        }

        a[j] = a[i];
    }

    a[i] = key;

    sqort(a, l, i - 1);
    sqort(a, i + 1, r);
}

int main(void)
{
    int m1, n, i;
    double x;

    while(scanf("%d %d", &n, &m1) && m1 != - 1 && n != -1)
    {
       x = 0;

       for(i = 1; i <= m1; i++)
       {
           scanf("%d %d", &a[i].f, &a[i].m);
       }

       for(i = 1; i <= m1; i++)
       {
            a[i].b = 1.0 * a[i].m / a[i].f;
       }

       sqort(a, 1, m1);

       for(i = 1; i <= m1; i++)
       {
           if(n > a[i].m)
           {
               x += a[i].f;
               n -= a[i].m;
           }

           else
           {
               x += 1.0 * n / a[i].b;
               break;
           }
       }



       printf("%.3lf\n", x);
    }

    return 0;

}

/*
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int wei;
    int money;
    double ave;
}a[51];
void arrange(struct node a[],int left,int right);
int main()
{
    int n,m,i;
    while(~scanf("%d%d",&n,&m)&&n!=-1&&m!=-1)
    {
        for(i=1;i<=m;i++)
        {
            scanf("%d%d",&a[i].wei,&a[i].money);
            a[i].ave=1.0*a[i].money/a[i].wei;
        }
        arrange(a,1,m);
        double k=0;int i=1;
        while(n)
        {
            if(i<=m)
            {
                if(n>=a[i].money)//如果带的钱比总价钱都多，那么就把这个仓库的货物都买下
                {
                    k+=a[i].wei;
                    n-=a[i].money;
                    i++;
                }
                else
                {
                    k+=1.0*n/a[i].ave;//不然的话就按照单价来买，用剩余的钱除以单价来得到货物
                    break;
                }
            }
            else break;
        }
        printf("%.3lf\n",k);
    }
    return 0;
}
void arrange(struct node a[],int left,int right)
{
    struct node x=a[left];
    int i=left,j=right;
    if(i>=j)return ;
    while(i<j)
    {
        while(i<j&&a[j].ave>=x.ave)j--;
        a[i]=a[j];
        while(i<j&&a[i].ave<=x.ave)i++;
        a[j]=a[i];
    }
    a[i]=x;
    arrange(a,left,i-1);
    arrange(a,i+1,right);
}

*/
