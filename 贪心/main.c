/*
#include<stdio.h>

int main(void)
{
    int n, h[40000], i, m, w;

    while(~scanf("%d", &n))
    {
        w = 1;

        for(i = 0; i < n; i++)
        {
            scanf("%d", &h[i]);
        }

        m = h[0];

        for(i = 1; i < n; i++)
        {
            if(m < h[i])
            {
                w++;
            }

            m = h[i];
        }

        printf("%d\n", w);
    }

    return 0;
}

*/

#include<stdio.h>  //2075����������ϵͳ
int main()
{   int n,i,j,h,m, a[10000];
    while(scanf("%d",&n)!=EOF)
        { for(i=0;i<n;i++)    scanf("%d",&a[i]);
          m=0;
          for(i=0;i<n;i++)
	         {    if(a[i]!=0)  //��û������
                   {   h=a[i]; //���´�a[i]��ʼ���Ӵ�С�����ݡ�̰�ģ��γ�һ��ϵͳ��
                       for(j=i+1;j<n;j++)
                          {   if(a[j]<=h&&a[j]!=0)  //��û������
                                {       h=a[j];
                                        a[j]=0;  //������
                                 }
                           }
                       m++;   //����ϵͳ����
                     }
	            }
             printf("%d\n",m);
         }
       return 0;
   }
