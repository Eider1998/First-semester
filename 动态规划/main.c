#include<stdio.h>

int sum[100001], a[100001];

int main(void)
{
    int i, j, n, m, max;

    while(~scanf("%d", &n))
    {
        for(i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);

            sum[i] = a[i];
        }

        for(i = 1; i <= n; i++)
        {
            m = 0;

            for(j = 1; j <= i; j++)
            {
                if(a[i] > a[j])
                {
                   if(m < sum[j])
                   {
                        sum[i] += sum[j];
                        m = sum[i];//��m����ס�ͣ�������������Ϳ϶�Խ��Խ�󣬷��򣬾ͼ������ļ��ɡ�
                   }
                }
            }

        }

        max = -1;

        for(i = 1; i <= n; i++)
        {
            if(max < sum[i])
            {
                max = sum[i];
            }
        }

        printf("%d\n", max);
    }

    return 0;
}
