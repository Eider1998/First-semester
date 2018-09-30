
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
            printf("%d ", w);    //此代码当输入多个空格时会输出多个数。所以此代码是错误的
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
输出样例：
4 5 2 3 3 4
时间限制：500ms内存限制：32000kb
*/
/*
    本题解法有个不理解的一点是:while第一次循环用scanf输入多个字符；但是在循环中只是判断一个字符，之后的while循环
    再经过scanf的时候不输入，自动读下一个字符，是不是跟scanf（"%c",)中的c有关？？？
    答：以下是个人猜测：
        当程序运行时遇到scanf，程序会去检查shell,看看有没有数据存在shell的缓冲区，如果没有，shell就等待键盘输入，此时
        键盘进行输入，到shell的缓冲区，直到按下回车，scanf由于括号里面是%c,此时从缓冲区读入一个字符到程序，接着程序运行
        下一步，当下个循环又遇到scanf时，程序会去检查shell的缓冲区有无数据，因为第一次输入多个字符，而只读了第一个字符，
        所以这个时候缓冲区还有数据，就不去启动等待键盘的输入，而是直接从缓冲区读入第二个字符，以此类推；
        总结：
            也就是说scanf从shell缓冲区读入数据，读多少，是看scanf（""）中的内容，而第一次键盘输入可以输入多个数据到shell的
            缓冲区，直到按下回车；
    1,本题不是考虑读入整个字符串，而是每次输入一个字符就读一个字符，并记录相关数字，用char ch 记录就好；
        不考虑用 char *ch???
        答：char ch 表示输入的字符，字符可以有很多个；而char *ch 表示ch指向字符串，只有一个；
    2,记录了第一个单词的长度，当遇到空格时如何保存第一个单词的长度，去记录第二个单词的长度？答：其实有个while循环
        每次遇到空格就先printf一个数字，只是程序运行太快，直观上以为printf是一次性输出，其实是一个循环一次输出，
        用debug就能看出端倪
    3,字符是用单引号表示
    4,对多余空格的处理，我选择判断是否cnt是零，如果是continue；（continue很巧妙，仔细体会）


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
                printf("%d ",cnt);    //有效的防止了有多个空格出现的情况
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
        tail = p;  //p变为尾结点

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
