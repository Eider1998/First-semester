#include<stdio.h>
#include<stdlib.h>

struct node //������������
{
    int data; //������
    struct node *next; //ָ����
};

struct node *creat1 (int n);
void display(struct node *head); //��ʾ�����н���ֵ

int main(void)
{
    int n; //������
    struct node *head; //��������ͷָ��

    scanf("%d", &n);  // ������ĸ���
    head = creat1(n); //����������������������ֵ����head
    display(head);    //��ʾ�����н���ֵ
    return 0;
}
