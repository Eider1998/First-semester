#include<stdio.h>
int add(int a, int b);   // ����������
int main(void)
{
    int c, d, sum = 0;

    scanf("%d %d", &c, &d);      //�����ĵ���
    sum = add(c, d);
    printf("%d", sum);
    return 0;
}
int add(int a, int b)           //�����Ķ���
{
    int sum;
    sum = a + b;
    return sum;                //����һ��ֵ����������main����

}
