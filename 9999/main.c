#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *next;
};

struct node *creat(int n)  //因为head是在里面定义的，所以现在就想返回回去
{
   int i;
   struct node *p, *tail, *head;

   p = (struct node *)malloc(sizeof(struct node));
   p-> next = NULL;
   p-> data = 1;
   head = p;
   tail = p;

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

void kill(struct node *head, int n)
{
    int count = 0, num = 0;
    struct node *p, *q;

    q = head;
    while(q-> next != head)
    {
        q = q-> next;
    }

    while(count <= n - 1)  //若队长最后再去
    {
        p = q-> next;
        num++;

        if(num % 5 == 0)
        {
            q-> next = p-> next;
             if(p-> data == 1)
            {
                printf("%d\n", count + 1);
            }
            free(p);
            count++;

            if(p-> data == 1)
            {
                printf("%d\n", count);
            }

        }

         else
            {
                q = p;
            }
    }
}

int main(void)
{
    int  m;
    struct node *h;

    while(scanf("%d", &m) && m != 0)
    {
      h = creat(m);
      kill(h, m);
    }

    return 0;
}
