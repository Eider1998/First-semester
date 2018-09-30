#include<stdio.h>
#include<stdlib.h>

struct node //定义链表类型
{
    int data; //数据域
    struct node *next; //指针域
};

struct node *creat1 (int n);
void display(struct node *head); //显示链表中结点的值

int main(void)
{
    int n; //结点个数
    struct node *head; //定义链表头指针

    scanf("%d", &n);  // 读入结点的个数
    head = creat1(n); //调用逆序建立链表函数，返回值赋给head
    display(head);    //显示链表中结点的值
    return 0;
}
