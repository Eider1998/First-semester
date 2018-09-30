/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

}*head1, *head2;

struct node *creat1(int m)
{
   int i;
   struct node *p, *tail1;

   head1 = (struct node*)malloc(sizeof(struct node));
   head1-> next = NULL;
   tail1 = head1;


   for(i = 1; i <= m; i++)
   {
       p = (struct node*)malloc(sizeof(struct node));
       p-> next = NULL;

       scanf("%d", &p-> data);
       tail1-> next = p;
       tail1 = p;
   }

   return head1;
}

struct node *creat2(int n)
{
   int i;
   struct node *q, *tail2;

   head2 = (struct node*)malloc(sizeof(struct node));
   head2-> next = NULL;
   tail2 = head2;



   for(i = 1; i <= n; i++)
   {
       q = (struct node*)malloc(sizeof(struct node));
       q-> next = NULL;

       scanf("%d", &q-> data);
       tail2-> next = q;
       tail2 = q;
   }

   return head2;
}

struct node *merge(struct node *head1, struct node *head2)
{
    struct node *q, *p, *tail;

    p = head1-> next;
    q = head2-> next;

    head1-> next = NULL;
    tail = head1;

    free(head2);

    while(p && q)
    {
        if(p-> data > q-> data)
        {
            tail-> next = q;
            tail = q;
            q = q-> next;
            tail-> next = NULL;
        }

        else
        {
            tail-> next = p;
            tail = p;
            p = p-> next;
            tail-> next = NULL;
        }
    }

    if(p)
    {
        tail-> next = p;
    }

    else
    {
        tail-> next = q;
    }

    return head1;
}

void print(struct node *head1)
{
    struct node *p;

    p = head1-> next;

    while(p != NULL)
    {
        if(p-> next != NULL)
        {
            printf("%d ", p-> data);
        }

        else
        {
            printf("%d\n", p-> data);
        }

        p = p-> next;
    }
}

int main(void)
{
    int m, n;
    struct node *h1, *h2, *h3;

    scanf("%d %d", &m, &n);
    h1 = creat1(m);
    h2 = creat2(n);

    h3 = merge(h1, h2);
    print(h3);

    return 0;
}


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *next;
}*head, *head1, *head2;

int a, b;

struct node *creat(int n)
{
    int i;
    struct node *p, *tail;

    head = (struct node*)malloc(sizeof(struct node));
    head-> next = NULL;
    tail = head;

    for(i = 1; i <= n; i++)
    {
        p = (struct node*)malloc(sizeof(struct node));
        p-> next = NULL;

        scanf("%d", &p-> data);
        tail-> next = p;
        tail = p;
    }

    return head;
}

void split(struct node *head)
{
    struct node *p, *tail1, *tail2;

    p = head-> next;
    head2 = (struct node*)malloc(sizeof(struct node));
    head2-> next = NULL;
    tail2 = head2;

    head1 = (struct node*)malloc(sizeof(struct node));
    head1-> next = NULL;
    tail1 = head1;
    a = 0;
    b = 0;

    while(p != NULL)
    {
        if((p-> data) % 2 == 0)
        {
            a++;
            tail1-> next = p;
            tail1 = p;
            p = p-> next;
            tail1-> next = NULL;
        }

        else
        {
            b++;
            tail2-> next = p;
            tail2 = p;
            p = p-> next;
            tail2-> next = NULL;
        }
    }

}

void print1(struct node *head1)
{
    struct node *p;

    p = head1-> next;

    while(p != NULL)
    {
        if(p-> next != NULL)
        {
            printf("%d ", p-> data);
        }

        else
        {
            printf("%d\n", p-> data);
        }

        p = p-> next;
    }
}

void print2(struct node *head2)
{
    struct node *p;

    p = head2-> next;

    while(p != NULL)
    {
        if(p-> next != NULL)
        {
            printf("%d ", p-> data);
        }

        else
        {
            printf("%d\n", p-> data);
        }

        p = p-> next;
    }
}

int main(void)
{
    int n;
    struct node *h;

    scanf("%d", &n);
    h = creat(n);

    split(h);
    printf("%d %d\n", a, b);

    print1(head1);
    print2(head2);

    return 0;
}



#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *next;
}*head, *tail;

struct node *creat(int m)
{
    int i;
    struct node *p;

    p = (struct node *)malloc(sizeof(struct node));

    for(i = 1; i <= m; i++)
    {
        scanf("%d", &p-> data);
        tail-> next = p;
        tail = p;
    }



    return head;
}

void search(struct node *head, int t, int m)
{
    struct node *p, *q;
    int i;
    p = head-> next;
    q = head;

    for(i = 1; i <= m; i++)
    {
        if(p-> data == t)
        {
            printf("%d %d\n", q-> data, p-> next -> data);
        }

        if(p == head-> next && p-> data == t)
         {
             printf("%d\n", p-> next-> data);
         }
         if(p == tail && p-> data == t)
         {
             printf("%d\n", q-> data);
         }
          p = p-> next;
          q = q-> next;
    }

}

int main(void)
{
    int m, n, i, t;
    struct node *h;

    head = (struct node *)malloc(sizeof(struct node));
    head-> next = NULL;
    tail = head;

    scanf("%d %d", &m, &n);
    h = creat(m);

    for(i = 1; i <= m; i++)
    {
        scanf("%d", &t);
        search(h, t, m);
    }

    return 0;
}


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *next, *prior;
}*head;

struct node *creat(int n)
{
    int i;
    struct node *p, *q, *z;

    p = head-> next;
    q = head;
    z = tail;
    for(i = 1; i <= n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &p-> data);
        q-> next = p;
        z-> prior = p;
        q = p;
        z = p;
    }

    return head;
}

void print(struct node *head)
{
    struct node *p;

    p = head-> next;

    while(p != NULL)
    {
        if(p-> next != NULL)
        {
            printf("%d ", p-> data);
        }

        else
        {
            printf("%d\n", p-> data);
        }

        p = p-> next;
    }
}


void search(struct node *head, int t, int n)
{
    struct node *p;
    int i;

    p = head-> next;

    for(i = 1; i <= n; i++)
    {
        if(p-> prior != head && p-> data == t && p-> next != tail)
        {
            printf("%d %d\n", p-> prior-> data, p-> next-> data);
        }

        if(p-> prior == head && p-> data == t)
        {
            printf("%d\n", p-> next-> data);
        }

        if(p-> next == tail && p-> data == t)
        {
            printf("%d\n", p-> prior-> data);
        }

        p = p-> next;
    }
}

int main(void)
{
    int n, m, i, t;
    struct node *h;

    head = (struct node*)malloc(sizeof(struct node));
    tail = (struct node*)malloc(sizeof(struct node));

    head-> prior = NULL;
    head-> next = tail;

    tail-> next = NULL;
    tail-> prior = head;

    scanf("%d %d", &n, &m);

    h = creat(n);

    for(i = 1; i <= m; i++)
    {
        scanf("%d", &t);
        search(h, t, n);
    }

    return 0;
}


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *next, *top;
}*head;

struct node *creat(int n)
{
    int i;
    struct node *p, *ls;
    // p = (struct node *)malloc(sizeof(struct node));
    p = head;

    for(i = 1; i <= n; i++)
    {
        ls = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &ls-> data);

        ls-> top = p;
        ls-> next = NULL;
                                      //双向建立链表的过程, 不需要使用尾结点
        p-> next = ls;
        p = ls;
    }

    return head;
}

void search(struct node *head, int t)
{
    int flag = 1;
    struct node *p;

     p = head-> next;

    while(p)
    {
        if(p-> data == t)
        {
            if(p-> top != head && p-> next != NULL)
            {
                printf("%d %d\n", p-> top-> data, p-> next-> data);
            }

            if(p-> top == head )
            {
                printf("%d\n", p-> next-> data);
            }

            if(p-> next == NULL)
            {
                printf("%d\n", p-> top-> data);
            }

            flag = 0;
        }

            p = p-> next;

    }

    if(flag)
    {
        printf("\n");
    }
}

int main(void)
{
    int n, m, t, i;
    struct node *h;

    head = (struct node *)malloc(sizeof(struct node));
    head-> top = NULL;
    head-> next = NULL;

    scanf("%d %d", &n, &m);
    h = creat(n);

    for(i = 1; i <= m; i++)
    {
        scanf("%d", &t);
        search(h, t);
    }

    return 0;
}



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
    p-> data = 1;
    head = p;   //去掉头结点
    tail = p;

    for(i = 2; i <= n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p-> data = i;
        p-> next = NULL;
        tail-> next = p;
        tail = p;
    }

    tail-> next = head; //构成循环链表
    return head;

}

void kill(struct node *head, int m, int n)
{
    int count = 0, a = 0;
    struct node *p, *q;

    q = head;

   while(q-> next != head)
   {
     q = q-> next; // 使指针q指向尾结点
   }
    while(count < n - 1)
    {
        p = q-> next;
        a++;
         if(a % m == 0)  //前面a已经自加
        {
            q-> next = p-> next;
            free(p);
            count++;
         }

        else
        {
            q = p;  //q为了一直在p的前面
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

*/

//注意题目要求是什么！！！

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *next;
};

struct node *creat(int m)
{
    struct node *p, *tail, *head;
    int i;

    p = (struct node *)malloc(sizeof(struct node));
    p-> data = 1;
    p-> next = NULL;
    head = p;
    tail = p;

    for(i = 2; i <= m; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));  //给p申请结点啊！！！！！
        p-> data = i;
        p-> next = NULL;

        tail-> next = p;
        tail = p;
    }

    tail-> next = head;

    return head;
}

void kill(struct node *head, int m)
{
    int a = 5, count = 0, b = 0;
    struct node *p, *q;

    q = head;

    while(q-> next != head)
    {
        q = q-> next; //注意最后可以进入时这里q已经指向了尾结点
    }

    while(count <= m - 1)
    {
        p = q-> next;
        b++;

        if(b % a == 0)
        {
            if(p-> data == 1)
            {
                printf("%d\n", count + 1); //好好理解这个地方
                break;
            }
            q-> next = p-> next;
            free(p);
            count++;  //因为，当count=1时表示第一个人走了
        }

        else
        {
            q = p;
        }
    }

}

int main(void)
{
    int m;

    struct node *h;

    while(scanf("%d", &m) && m != 0)
    {
        h = creat(m);  //因为这里用到了while循环，所以就希望，输入下一个数时，以前的聊表消失，所以head不能在函数外面定义

        kill(h, m);
    }

    return 0;
}
