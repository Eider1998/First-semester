#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *creat(int n)
{
   struct node *p, *head;
   int i;

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

void print(struct node *head)
{
    struct node *p;

    p = head-> next;

    while(p)
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


int deli(struct node *head, int n)
{
    struct node *q, *x, *z;

    q = head-> next;

    while(q)
    {
        z = q;
        x = q-> next;
        while(x)
        {
             if(q-> data == x-> data)
             {
               z-> next = x-> next;
               free(x);
               x = z-> next;
               n--;
            }

            else
            {
                x = x-> next;
                z = z-> next;
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

    return n;
}
