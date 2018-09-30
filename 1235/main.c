#include<stdio.h>
#include<string.h>
#define INF 999999

using namespace std;
/**
int gcd(int x, int y) ///�ݹ鷽���������Լ��
{
    return y==0?x:gcd(y,x%y);
}
**/
int FZ,FM,fz,fm;  ///���ӷ�ĸ
int  _max(int n,int m)  ///շת�������n��m�������Լ��
{
    int temp,r;
    n = abs(n);  ///��ȡ����ֵ���Ȳ��ÿ��Ƿ���
    m = abs(m);  ///��ȡ����ֵ���Ȳ��ÿ��Ƿ���
    if(n < m)    ///շת�������Ҫ��n�Ǵ������m��С�������������Ҫ���бȽ�
    {
        temp = n;
        n = m;
        m = temp;
    }
    while(1)   ///շת�����
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
void fun(char str[])  ///����ӣ���ĸ
{
    int len;
    int i;
    len = strlen(str);
    fz = 0;
    if(str[0]=='-') ///�����Ǹ���
    {
        for(i = 1; i < len; i++)
        {
            if(str[i]=='/')  ///�����Ž�ֹ
                break;
            fz = fz*10 + (str[i]-'0');
        }
        fz = -1*fz;  ///��������෴��
    }
    else  ///����������
    {
        for(i = 0; i < len; i++)
        {
            if(str[i]=='/')
                break;
            fz = fz*10 + (str[i]-'0');
        }
    }
    fm = 0;          ///��ĸ��0
    i++;             ///�����ֺ�
    if(str[i]=='-')    ///�����ĸ�Ǹ���
    {
        for(i = i+1;i < len; i++)  ///��������
        {
            fm = fm*10 + (str[i]-'0');
        }
        fm = -1*fm;        ///ȡ�෴��
    }
    else  ///��ĸ������
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
    int N;  ///N���������
    while(~scanf("%d",&N))
    {
        scanf("%s",s);  ///�������һ������
        fun(s);  ///����ӷ�ĸ
        if(fz == 0) ///��һ������0
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
            fun(s);     ///����ӷ�ĸ
            if(fz == 0)  ///����ǰ�����ֵΪ0�����üӣ�ֱ������
                continue;
            fz = FZ*fm + FM*fz;  ///��������ͨ��
            fm = FM*fm;
            if(fz == 0)   ///˵����ǰ������0������ǰ��ֵ��Ϊ0
            {
                FZ = 0;
                FM = 1;
            }
            else        ///���������Լ�����������
            {
                int num = _max(fz,fm);  ///�����Լ��
                FZ = fz/num;   ///�������
                FM = fm/num;   ///�������
            }
        }
        if(FZ == 0) ///�������Ϊ0�������0
            printf("0\n");
        else if((FZ>0&&FM>0)||(FZ<0&&FM<0))  ///���ӷ�ĸͬ��
        {
            FZ = abs(FZ);       ///����������ֱ�������ֵ
            FM = abs(FM);
            if(FZ%FM == 0)      ///����ܳ���
                printf("%d\n",FZ/FM);
            else
            {
                int t = FZ/FM;
                if(t)            ///�Ǽٷ���
                    printf("%d %d/%d\n",t,FZ-t*FM,FM);
                else
                    printf("%d/%d\n",FZ,FM);
            }
        }
        else if((FZ>0&&FM<0)||(FZ<0&&FM>0))
        {
            printf("-");  ///���������
            FZ = abs(FZ);
            FM = abs(FM);
            if(FZ%FM == 0)
                printf("%d\n",FZ/FM);
            else
            {
                int t = FZ/FM;
                if(t)  ///�Ǽٷ���
                    printf("%d %d/%d\n",t,FZ-t*FM,FM);
                else
                    printf("%d/%d\n",FZ,FM);
            }
        }
    }
    return 0;
}
