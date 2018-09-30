#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *next;
};

struct node *creat(int n)
{
      struct node *p, *head, *tail;
      int i;

      p = (struct node *)malloc(sizeof(struct node));
      p-> data = 1;
      p-> next = NULL;

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
    struct node *p, *q;
    int count = 0, num = 0;

    q = head;

    while(q-> next != head)
    {
        q = q-> next;
    }

    while(count <= n - 1)
    {
        num++;
        p = q-> next;

        if(num % 5 == 0)
        {
            q-> next = p-> next;
            if(p-> data == 1)
            {
                printf("%d\n", count + 1);
            }
            free(p);

            count++;
        }

        else
        {
            q = p;
        }
    }
}

int main(void)
{
    int n;
    struct node *h;

    while(scanf("%d", &n) && n != 0)
    {
        h = creat(n);
        kill(h, n);
    }

    return 0;
}
