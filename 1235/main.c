#include<stdio.h>
#include<string.h>
#define INF 999999

using namespace std;
/**
int gcd(int x, int y) ///递归方法，求最大公约数
{
    return y==0?x:gcd(y,x%y);
}
**/
int FZ,FM,fz,fm;  ///分子分母
int  _max(int n,int m)  ///辗转相除法求n和m的求最大公约数
{
    int temp,r;
    n = abs(n);  ///都取绝对值，先不用考虑符号
    m = abs(m);  ///都取绝对值，先不用考虑符号
    if(n < m)    ///辗转相除，我要让n是大的数，m是小的数，因此这里要进行比较
    {
        temp = n;
        n = m;
        m = temp;
    }
    while(1)   ///辗转相除法
    {
       r = n%m;
       if(r != 0)
       {
           n = m;
           m = r;
       }
       else
        return m;
    }
}
void fun(char str[])  ///求分子，分母
{
    int len;
    int i;
    len = strlen(str);
    fz = 0;
    if(str[0]=='-') ///分子是负数
    {
        for(i = 1; i < len; i++)
        {
            if(str[i]=='/')  ///到除号截止
                break;
            fz = fz*10 + (str[i]-'0');
        }
        fz = -1*fz;  ///变成它的相反数
    }
    else  ///分子是正数
    {
        for(i = 0; i < len; i++)
        {
            if(str[i]=='/')
                break;
            fz = fz*10 + (str[i]-'0');
        }
    }
    fm = 0;          ///分母是0
    i++;             ///跳过分号
    if(str[i]=='-')    ///如果分母是负数
    {
        for(i = i+1;i < len; i++)  ///跳过负号
        {
            fm = fm*10 + (str[i]-'0');
        }
        fm = -1*fm;        ///取相反数
    }
    else  ///分母是正数
    {
        for(; i < len; i++)
        {
            fm = fm*10 + (str[i]-'0');
        }
    }
}
int main()
{
    char s[500];
    int N;  ///N个分数相加
    while(~scanf("%d",&N))
    {
        scanf("%s",s);  ///先输入第一个分数
        fun(s);  ///求分子分母
        if(fz == 0) ///第一个数是0
        {
            FZ = 0;
            FM = 1;
        }
        else
        {
            FZ = fz;
            FM = fm;
        }
        for(int i = 1; i < N; i++)
        {
            scanf("%s",s);
            fun(s);     ///求分子分母
            if(fz == 0)  ///代表当前输入的值为0，不用加，直接跳过
                continue;
            fz = FZ*fm + FM*fz;  ///这两部是通分
            fm = FM*fm;
            if(fz == 0)   ///说明当前分子是0，即当前和值变为0
            {
                FZ = 0;
                FM = 1;
            }
            else        ///否则求最大公约数，化简分数
            {
                int num = _max(fz,fm);  ///求最大公约数
                FZ = fz/num;   ///化简分数
                FM = fm/num;   ///化简分数
            }
        }
        if(FZ == 0) ///如果分子为0，则输出0
            printf("0\n");
        else if((FZ>0&&FM>0)||(FZ<0&&FM<0))  ///分子分母同号
        {
            FZ = abs(FZ);       ///不管正负，直接求绝对值
            FM = abs(FM);
            if(FZ%FM == 0)      ///如果能除尽
                printf("%d\n",FZ/FM);
            else
            {
                int t = FZ/FM;
                if(t)            ///是假分数
                    printf("%d %d/%d\n",t,FZ-t*FM,FM);
                else
                    printf("%d/%d\n",FZ,FM);
            }
        }
        else if((FZ>0&&FM<0)||(FZ<0&&FM>0))
        {
            printf("-");  ///先输出负号
            FZ = abs(FZ);
            FM = abs(FM);
            if(FZ%FM == 0)
                printf("%d\n",FZ/FM);
            else
            {
                int t = FZ/FM;
                if(t)  ///是假分数
                    printf("%d %d/%d\n",t,FZ-t*FM,FM);
                else
                    printf("%d/%d\n",FZ,FM);
            }
        }
    }
    return 0;
}
