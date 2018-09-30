#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node *next;
}*head;

struct node *creat(int n)
{
  int i;
  struct node *p;

  head = (struct node *)malloc(sizeof(struct node));
  head-> next = NULL;

  for(i = 1; i <= n; i++)
  {
      p = (struct node *)malloc(sizeof(struct node));
      scanf("%d", &p-> data);

      p-> next = head-> next;
      head-> next = p;
  }

  return head;
}

int deli(struct node *head, int n)
{
    struct node *p, *q, *x;
    int m;
    m = n;

    p = head-> next;
    while(p != NULL)
    {
        q = p-> next;
        x = p;
        while(q != NULL)
        {
            if(q-> data == x-> data)
          {
            x-> next = q-> next;
            m--;
          }

            q = q-> next;
       }

       p = p-> next;
    }

    return m;
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
    int m;
    struct node *h;

    scanf("%d", &n);
    h = creat(n);
    printf("%d\n", n);
    print(h);
    m = deli(h);
    printf("%d\n", m);

    print(h);

    return 0;
}
