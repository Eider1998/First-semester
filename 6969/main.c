
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
        tail = p; //p��Ϊβ���

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
struct node *create(int n)  // ˳������
{
   int i;  struct node *head,*tail,*p;
   head=(struct node *)malloc(sizeof(struct node)); // ����ͷ���
   head->next=NULL;
   tail=head;           //ͷβָ��ָ��ͬһ����
   for( i=1;i<=n;i++)  //����n���������
    {   p=(struct node *)malloc(sizeof(struct node));//�����½��
        scanf("%d", &p->data);  //�������������
        p->next=NULL;     //����ָ����Ϊ��
        tail->next=p; //���½���������β��
        tail=p; //�������β���ָ���½��
    }
    return (head);
}
void  print(struct node *h)
  // ��������е�����
{  struct node *p;
    p=h->next;
    while (p!=NULL)
    {   printf("%d", p->data);
        if (p->next!=NULL)  printf(" ");
        p=p->next;  //pָ����һ�����
    }
    printf("\n");
}
int main()
{   int  n;    struct  node  *h;
    scanf("%d", &n);      //���������
    h=create(n);//��������
    print(h);  // �������
    return 0;
}

*/

//��������
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

    a[high] = part_element; //�˳�forѭ������low==high
    return high;
}


*/

#include<stdio.h>

int main(void)
{
    printf("100\nA\n3.140000\n");

    return 0;
}
