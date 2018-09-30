/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *next;
}*h;

int len;

void insert(int mi, int xi)
{
    struct node *p = h;
    struct node *q;
    int i;

    for(i = 0; i < mi && i < len; i++)
    {
        p = p-> next;
    }

    q = (struct node *)malloc(sizeof(struct node));
    q->data = xi;
    q-> next = p-> next;
    p-> next = q;

    len++;
}

void print()  //这里什么都没有传过来，所以不能用以前的方法来做（即不能if（p == NULL））
{
    int i;
    struct node *p = h-> next;

    for(i = 1; i <= len; i++)
    {
        if(i == 1)
        {
            printf("%d", p-> data);
        }

        else
        {
            printf(" %d", p-> data);
        }

        p = p-> next;
    }

    printf("\n");
}

int main(void)
{
    int i, n, mi, xi;

    h = (struct node *)malloc(sizeof(struct node));
    h-> next = NULL;

    while(~scanf("%d", &n))
    {
        len = 0;
        for(i = 1; i <= n; i++)
        {
            scanf("%d %d", &mi, &xi);
            insert(mi, xi);
        }

       print();
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
   struct node *p;
   head = (struct node*)malloc(sizeof(struct node));
   head-> next = NULL;
   int i;

   for(i = 0; i < n; i++)
   {
       p = (struct node*)malloc(sizeof(struct node));
       scanf("%d", &p-> data);
       p-> next = head-> next;
       head-> next = p;
   }

   return head;
}

void print(struct node *h)
{
    struct node *p = h-> next;

    while(p != NULL)
    {
        if(p-> next != NULL)
        {
            printf("%d ", p-> data);
        }
        if(p-> next == NULL)
        {
            printf("%d\n", p-> data);
        }

        p = p-> next;
    }
}

int deli(struct node *h, int n)
{
   struct node *q, *z, *x;

   q = h-> next;

   while(q != NULL)
   {
       z = q;
       x = q-> next;

       while(x != NULL)
       {
           if(q-> data == x-> data)
           {
               z-> next = x-> next;
               x = z-> next;
               n--;
           }

           else
           {
               z = z-> next;
               x = x-> next;
           }
       }

       q = q-> next;
   }

   return n;
}

int main(void)
{
    int n, m;
    struct node *h;

    scanf("%d", &n);

    h = creat(n);
    printf("%d\n", n);
    print(h);
    m = deli(h, n);
    printf("%d\n", m);
    print(h);
    return 0;
}

*/

/* ？？
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

struct node *creat()
{
    struct node *p, *tail;
    int n;

    head = (struct node *)malloc(sizeof(struct node));
    head-> next = NULL;
    tail = head;
    while(scanf("%d", &n) && n != -1)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p-> data = n;
        p-> next = NULL;
        tail-> next = p;
        tail = p;
    }

    return head;
}

void reverse(struct node *h)
{
    struct node *p, *q;

    p = head-> next;
    head-> next = NULL;
    q = p-> next;

    while(p != NULL)
    {
      p->next = head-> next;
      head-> next = p;
      p = q;
      if(q)
      {
          q = q-> next;
      }
    }
}

void print(struct node *h)
{
    struct node *q;

    q = head-> next;
    while(q != NULL)
    {
        if(q-> next != NULL)
        {
            printf("%d ", q-> data);
        }

        if(q-> next == NULL)
        {
            printf("%d\n", q-> data);
        }

        q = q-> next;
    }
}

 int main(void)
{
    struct node *h;

    h = creat();
    reverse(h);
    print(h);

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
      struct node *tail, *p;
      int i;

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

int main(void)
{
    int n;
    struct node *h;

    scanf("%d", &n);
    h = creat(n);
    print(h);

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
    struct node *p;
    int i;

    head = (struct node*)malloc(sizeof(struct node));
    head-> next = NULL;

    for(i = 1; i <= n; i++)
    {
        p = (struct node*)malloc(sizeof(struct node));
        p-> next = NULL;

        scanf("%d", &p-> data);
        p-> next = head-> next;
        head-> next = p;
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

int main(void)
{
    int n;
    struct node *h;

    scanf("%d", &n);

    h = creat(n);
    print(h);

    return 0;
}


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

int len;

void insert(int mi, int xi)
{
    int i;
    struct node *p = head, *q;


    for(i = 1; i <= mi && i <= len; i++)
    {
        p = p-> next;
    }
    q = (struct node*)malloc(sizeof(struct node));
    q-> data = xi;
    q-> next = p-> next;
    p-> next = q;
    len++;
}

void print()
{
    struct node *p;
    int i;
    p = head-> next;

    for(i = 1; i <= len; i++)
    {
        if(i == 1)
        {
            printf("%d", p-> data);
        }

        else
        {
            printf(" %d", p-> data);
        }

        p = p-> next;
    }

    printf("\n");
}

int main(void)
{
    int mi, xi, n, i;
    head = (struct node*)malloc(sizeof(struct node));
    head-> next = NULL;

    while(~scanf("%d", &n))
    {
        len = 0;
        for(i = 1; i <= n; i++)
        {
            scanf("%d %d", &mi, &xi);

            insert(mi, xi);
        }

        print();
    }

    return 0;
}

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

struct node *creat(int n)
{

}

int 7
