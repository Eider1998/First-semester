
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


char str[100001][100];


int main(void)
{
    int a[100];


    long c, b, y, d, w = 0, t, i, j;


    scanf("%ld", &y);

    c = abs(y);
    b = c;
    d = c;
    while(b / 10)
    {
        b = b / 10;
        w++;
    }


    w += 1;


    for(i = 0; i < w - 1; i++)
    {
        if(d / 10)
        {
            a[i] = d % 10;
            d = d / 10;
        }
    }


    a[w - 1] = d;


    i = 0; j = w - 1;


    while(i < j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }


    for(i = 0; i < w; i++)
  {
         if(a[i] == 0)
    {
        strcpy(str[i], "ling");
    }


    if(a[i] == 1)
    {
        strcpy(str[i], "yi");
    }


    if(a[i] == 2)
    {
        strcpy(str[i], "er");
    }


    if(a[i] == 3)
    {
        strcpy(str[i], "san");
    }


    if(a[i] == 4)
    {
        strcpy(str[i], "si");
    }


    if(a[i] == 5)
    {
        strcpy(str[i], "wu");
    }


    if(a[i] == 6)
    {
        strcpy(str[i], "liu");
    }


    if(a[i] == 7)
    {
        strcpy(str[i], "qi");
    }


    if(a[i] == 8)
    {
        strcpy(str[i], "ba");
    }


    if(a[i] == 9)
    {
        strcpy(str[i], "jiu");
    }
  }


  if(y < 0)
  {
      printf("fu ");


      for(i = 0; i < w - 1; i++)
      {
          printf("%s ", str[i]);
      }


      printf("%s\n", str[w - 1]);
  }


  if(y > 0)
  {
      for(i = 0; i < w - 1; i++)
      {
          printf("%s ", str[i]);
      }


      printf("%s\n", str[w - 1]);
  }


  if(y == 0)
  {
      printf("ling\n");
  }


    return 0;
}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char ch = '0';
    int w = 0;

    while(~scanf("%c", &ch))
    {

        if(ch != ' ')
        {
            w++;
        }

        if(ch == ' ')
        {
            printf("%d ", w);    //�˴��뵱�������ո�ʱ���������������Դ˴����Ǵ����
            w = 0;
        }

        if(ch == '.')
        {
            printf("%d\n", w - 1);
            break;
        }
    }
    return 0;

}

*/
/*
���������
4 5 2 3 3 4
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/
/*
    ����ⷨ�и�������һ����:while��һ��ѭ����scanf�������ַ���������ѭ����ֻ���ж�һ���ַ���֮���whileѭ��
    �پ���scanf��ʱ�����룬�Զ�����һ���ַ����ǲ��Ǹ�scanf��"%c",)�е�c�йأ�����
    �������Ǹ��˲²⣺
        ����������ʱ����scanf�������ȥ���shell,������û�����ݴ���shell�Ļ����������û�У�shell�͵ȴ��������룬��ʱ
        ���̽������룬��shell�Ļ�������ֱ�����»س���scanf��������������%c,��ʱ�ӻ���������һ���ַ������򣬽��ų�������
        ��һ�������¸�ѭ��������scanfʱ�������ȥ���shell�Ļ������������ݣ���Ϊ��һ���������ַ�����ֻ���˵�һ���ַ���
        �������ʱ�򻺳����������ݣ��Ͳ�ȥ�����ȴ����̵����룬����ֱ�Ӵӻ���������ڶ����ַ����Դ����ƣ�
        �ܽ᣺
            Ҳ����˵scanf��shell�������������ݣ������٣��ǿ�scanf��""���е����ݣ�����һ�μ�������������������ݵ�shell��
            ��������ֱ�����»س���
    1,���ⲻ�ǿ��Ƕ��������ַ���������ÿ������һ���ַ��Ͷ�һ���ַ�������¼������֣���char ch ��¼�ͺã�
        �������� char *ch???
        ��char ch ��ʾ������ַ����ַ������кܶ������char *ch ��ʾchָ���ַ�����ֻ��һ����
    2,��¼�˵�һ�����ʵĳ��ȣ��������ո�ʱ��α����һ�����ʵĳ��ȣ�ȥ��¼�ڶ������ʵĳ��ȣ�����ʵ�и�whileѭ��
        ÿ�������ո����printfһ�����֣�ֻ�ǳ�������̫�죬ֱ������Ϊprintf��һ�����������ʵ��һ��ѭ��һ�������
        ��debug���ܿ�������
    3,�ַ����õ����ű�ʾ
    4,�Զ���ո�Ĵ�����ѡ���ж��Ƿ�cnt���㣬�����continue����continue�������ϸ��ᣩ


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch= '0';
    int cnt = 0;
    while(ch != '.'){
        scanf("%c",&ch);
        if (ch == '.'){
            printf("%d",cnt);
            break;
        }
        else if (ch != ' '){
            cnt++;
        }
        else {
            if (cnt != 0){
                printf("%d ",cnt);    //��Ч�ķ�ֹ���ж���ո���ֵ����
                cnt = 0;
            }
            else{
                continue;
            }
        }

    }
    return 0;
}




#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;

    struct node *next;
};

struct node *creat1(int n)
{
    struct node *head, *p;

    int i;

    head = (struct node *)malloc(sizeof(struct node));

    head-> next = NULL;

    for(i = 1; i <= n; i++)
    {
       p = (struct node *)malloc(sizeof(struct node));

       scanf("%d", &p-> data);

        p->next = head ->next;
        head ->next = p;

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
        tail = p;  //p��Ϊβ���

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


int main(void)
{
    int n;
    struct node *h;

    scanf("%d", &n);
    h = creat1(n);
    print(h);

    return 0;
}
