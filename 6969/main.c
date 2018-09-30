
/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *creat1(int n)
{
    int i;
    struct node *head, *tail, *p;

    head = (struct node *)malloc(sizeof(struct node));
    head-> next = NULL;
    tail = head;

    for(i = 1; i <= n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &p-> data);

        p-> next = NULL;
        tail-> next = p;
        tail = p; //p变为尾结点

    }

    return head;
}

void print(struct node *h)
{
    struct node *p;

    p = h-> next;

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
int main(void)
{
    int n;
    struct node *h;

    scanf("%d", &n);
    h = creat1(n);
    print(h);

    return 0;
}
*/
/*

#include<stdio.h>
#include<stdlib.h>
struct node
{  int data;  struct node *next; };
struct node *create(int n)  // 顺序建链表
{
   int i;  struct node *head,*tail,*p;
   head=(struct node *)malloc(sizeof(struct node)); // 申请头结点
   head->next=NULL;
   tail=head;           //头尾指针指向同一个点
   for( i=1;i<=n;i++)  //建立n个点的链表
    {   p=(struct node *)malloc(sizeof(struct node));//申请新结点
        scanf("%d", &p->data);  //输入结点的数据域
        p->next=NULL;     //结点的指针域为空
        tail->next=p; //将新结点插入链表尾部
        tail=p; //让链表的尾结点指向新结点
    }
    return (head);
}
void  print(struct node *h)
  // 输出链表中的数据
{  struct node *p;
    p=h->next;
    while (p!=NULL)
    {   printf("%d", p->data);
        if (p->next!=NULL)  printf(" ");
        p=p->next;  //p指向下一个结点
    }
    printf("\n");
}
int main()
{   int  n;    struct  node  *h;
    scanf("%d", &n);      //输入结点个数
    h=create(n);//建立链表
    print(h);  // 输出链表
    return 0;
}

*/

//快速排序
/*
#include<stdio.h>
#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);

    printf("In sorted order: ");

    for(i = 0; i < N; i++)
    {
        printf("%d", a[i]);
    }

    printf("\n");

    return 0;
}

void quicksort(int a[], int low, int high)
{
    int middle;

    if(low >= high)
    {
        return ;
    }

    middle = split(a, low, high);

    quicksort(a, low, middle - 1);

    quicksort(a, middle + 1; high);

}

int split(int a[], int low, int high)
{
    int part_element = a[low];

    for(;;)
    {
        while(low < high && part_element <= a[high])
        {
            high--;
        }

        if(low >= high)
        {
            break;
        }

        a[low++] = a[high];

        while(low < high && a[low] <= part_element)
        {
            low++;
        }

        if(low >= high)
        {
            break;
        }

        a[high--] = a[low];
    }

    a[high] = part_element; //退出for循环，则low==high
    return high;
}


*/

#include<stdio.h>

int main(void)
{
    printf("100\nA\n3.140000\n");

    return 0;
}
