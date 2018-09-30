/*
#include<stdio.h>
void swap(int *p, int *q);

int main(void)
{
    int i, j, *m, *n;

    scanf("%d %d", &i, &j);
    m = &i;
    n = &j;;

    swap(m, n);
    printf("%d %d\n", i, j);
    return 0;
}

void swap(int *p, int *q)
{
    int t;

    t = *p;
    *p = *q;
    *q = t;
}


#include<stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int i, b, a[3], y;

    scanf("%d",&b);
    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    y = *find_largest(a, b);
    printf("%d\n", y);
    return 0;
}

int *find_largest(int a[], int n)
{
    int max = 0, i;
    for(i = 0; i < n; i++)
    {
        if(a[max] < a[i])
        {
            max = i;
        }
    }
    return &a[max];
}




#include<stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largst);

int main(void)
{
    int a[10], i, n, *p, *q;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = &a[0];
    q = &a[0];
    find_two_largest(a, n, p, q);
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i, m;

    for(i = 0; i < n; i++)
    {
        if(*largest < a[i])
        {
            *largest = a[i];   //����˼·��һ��ʼ���Ǵ�ģ���Ϊ*largest -> a[0]��ֵ�� ��˾ͻ�ı�a[0], ��ֵ�����Դ��������Ǵ���ġ�
            m = i;
        }
    }

    for(i = 0; i < m; i++)
    {
          if(*second_largest < a[i])
          {
              *second_largest = a[i];
          }
    }
    for(i = m + 1; i < n; i++)
    {
          if(*second_largest < a[i])
          {
              *second_largest = a[i];
          }
    }
    printf("%d %d\n", *largest, *second_largest);
}



#include<stdio.h>
#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int i, n, *p, *q, a[N];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = NULL;
    q = NULL;  // ָ��һ��Ҫ��ʼ���� Ҫ��Ȼ���������������warnning��
    find_two_largest(a, n, p, q);
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i, mark1, mark2;

    mark1 = 0; //��mark������±�
    mark2 = 0;

    for(i = 0; i < n; i++)
    {
        if(a[mark1] < a[i])
        {
            mark1 = i;
        }
    }
    largest = &a[mark1];

    for(i = 0; i < mark1; i++)
    {
        if(a[i] != a[mark1]  && a[mark2] < a[i])
        {
            mark2 = i;
        }
    }
    for(i = mark1 + 1; i < n; i++)
    {
        if(a[i] != a[mark1] && a[mark2] < a[i])
        {
            mark2 = i;
        }
    }
    second_largest = &a[mark2];

    printf("%d %d\n", *largest, *second_largest);
}



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




#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(int n) //˳��������
{
    int i;
    struct node *p, *tail, *head;

    head = (struct node *)malloc (sizeof(struct node)); //����ͷ���
    head -> next = NULL;
    tail = head; //ͷβָ��ָ��ͬһ����
    for(i = 1; i <= n; i++) //����n���������
    {
         p = (struct node*) malloc (sizeof (struct node)); //�����½��
         scanf("%d", &p -> data); //�������������
         p -> next = NULL; //����ָ����Ϊ��
         tail -> next = p; //���½����뵽����β��
         tail = p; //�������β���ָ���½��
    }
        return (head);
}

void print(struct node *h)
//������������
{
    struct node *p;

    p = h -> next;
    while(p != NULL)
    {
        printf("%d", p -> data);
        if(p -> next != NULL)
        {
            printf(" ");
        }
        p = p -> next;
    }
    printf("\n");
}

int main(void)
{
   int n;
   struct node *h;

   scanf("%d", &n); //������ĸ���
   h = create(n); //��������
   print(h); //�������
   return 0;
}



//��д����
bool search(const int a[], int n, int key)
{
    int *p, flag = 1;

    for(p = a; p < a + n; p++)
    {
        if(*p == key)
        {
            flag = 0;
            return true;

        }
    }
    if(flag)
    {
        return false;
    }
}




#include<stdio.h>
#include<stdlib.h>

double inner_product(const double *a, const double *b);

int main(void)
{
    double a[3], b[3], t;
    int i;

    for(i = 0; i < 3; i++)
    {
        scanf("%lf", &a[i]);
    }

    for(i = 0; i < 3; i++)
    {
        scanf("%lf", &b[i]);
    }

    t = inner_product(a, b);
    printf("%lf\n", t);
    return 0;

}
double inner_product(const double *a, const double *b)
{
    double const *p = NULL;
    double const *q = NULL;
    double sum;

    for(p = a, q = b; p < a + 3 && q < b + 3; p++, q++)
    {
        sum += (*p) * (*q);
    }
    return sum;
}




#include<stdio.h>
#include<string.h>
int main(void)
{
    int i, j;
    char s[100];

    scanf("%d%s%d", &i, s, &j);     //������Ȼû�пո��� �ڽ��б����ʱ�� ��������ҲҪ���Ͽո񡣷����޷����б��롣
    printf("%d %s %d\n", i, s, j);
    return 0;
}


#include<stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for(p = s; *p; p++)
    {
        --*p;
    }
    puts(s);
    return 0;
}




#include<stdio.h>

int f(char *s, char *t);

int main(void)
{
    char str[100], t1[100];
    int s;

    gets(str);
    gets(t1);

    s = f(str, t1);
    printf("%d\n", s);
    return 0;
}
int f(char *s, char *t)
{
    char *p1, *p2;

    for(p1 = s; *p1; p1++)
    {
        for(p2 = t; *p2; p2++)
        {
            if(*p1 == *p2)
            {
                break;
            }

            if(*p2 == '\0')
            {
                break;
            }
        }
    }
    return p1 - s;
}


*/
