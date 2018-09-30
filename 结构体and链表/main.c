#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

struct node *creat(int n)
{
    struct node *p, *tail;
    int i;

    p = (struct node *)malloc(sizeof(struct node));
     //循环链表不要头结点

    p-> data = 1;
    head = p;
    tail = head;

    for(i = 2; i <= n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p-> data = i;
        p-> next = NULL;
        tail-> next = p;
        tail = p;
    }

    tail-> next = head;

    return head;
}

void kill(struct node *head, int m, int n)
{
    struct node *p, *q;
    int count = 0, num = 0;

    q = head;
    while(q-> next != head)
    {
        q = q-> next;
    }

    while(count < n - 1)
    {
        num++;
        p = q-> next;

        if(num % m == 0)
        {
            q-> next = p-> next;
            free(p);
            count++;
        }

        else
        {
            q = p;
        }
    }

    printf("%d\n", q-> data);
}

int main(void)
{
    int m, n;
    struct node *h;

    scanf("%d %d", &n, &m);
    h = creat(n);
    kill(h, m, n);

    return 0;
}
