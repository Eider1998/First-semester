/*
#include<stdio.h>
#include<string.h>

struct stu

{
    char name[20];
    int hi, mi, hm;
}p[100], t[100];
int main(void)
{
    int i, n, h, m, q;

    while(~scanf("%d", &n))
    {
        for(i = 0; i < n; i++)
        {
            scanf("%s %d %d", p[i].name, &p[i].hi, &p[i].mi);
        }
       scanf("%d:%d", &h, &m);
        q = h * 60 + m;
        for(i = 0; i < n; i++)
        {
            t[i].hm = p[i].hi * 60 + p[i].mi;
        }
        for(i = 0; i < n; i++)
        {
            printf("%d%c", t[i].hm, i == n - 1?'\n':' ');
        }
    }
    return 0;
}
*/
/*
#include<stdio.h>

struct stu

{
    int s, p;
}t[1000], m;  //必须在这里定义m， 因为下面m要变成中间变量，整体代换t中的东西，所以m和t的结构要一样。
int main(void)
{
    int n, i, j, q[1000];

    while(~scanf("%d", &n))
    {
         for(i = 0; i < n; i++)
    {
        q[i] = i + 1;
    }
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &t[i].s, &t[i].p);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(t[j].s < t[j + 1].s)
            {
                m = t[j], t[j] = t[j + 1], t[j + 1] = m;
            }
            if(t[j].s == t[j + 1].s)
            {
                if(t[j].p > t[j + 1].p)
                {
                    m = t[j], t[j] = t[j + 1], t[j + 1] = m;
                }
            }
        }
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
              if(t[j].s == t[j + 1].s && t[j].p == t[j + 1].p)
                {
                    q[j + 1] = q[j];
                }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d %d %d\n", q[i], t[i].s, t[i].p);
    }
    }

    return 0;
}

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
    char name[2000], from[2000], to[2000];
}p[30000];
int main(void)
{
    char str1[20] = "zichuan", str2[20] = "linzi", str3[20] = "zhoucun", str4[20] = "boshan";
    int n, i, j, k, flag;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%s %s %s", p[i].name, p[i].from, p[i].to);
    }
    for(i = 0; i < n; i++)
    {
           flag = 0;
           for(k = 0; k < n; k++)
           {
               if(k != i && strcmp(p[i].from, p[k].from) == 0)
               {
                    break;
               }   //为了防止1已经等于2的from如果把第二个if放前面则2又=2，又会输出一遍from
                if(k == i)
               {
                   printf("%s : ", p[i].from);
                   printf("%s ", p[k].name);
                   flag = 1;
               }
           }
           if(flag)
           {
               for(j = i + 1; j < n; j++)  //j=i?/我为了防止到第二个相同的地址又开始一个循环又来输出以前已经输出的东西。
           {

               if(strcmp(p[j].from, p[i].from) == 0)
               {
                   printf("%s ", p[j].name);
               }
           }
           }

        if(flag)
        {
            printf("\n");
        }

    }
    printf("zichuan : ");
    for(i = 0; i < n; i++)
    {
        if(strcmp(p[i].to, str1) == 0)
        {
            printf("%s ", p[i].name);
        }
    }
    printf("\n");
    printf("linzi : ");
    for(i = 0; i < n; i++)
    {
        if(strcmp(p[i].to, str2) == 0)
        {
            printf("%s ", p[i].name);
        }
    }
    printf("\n");
    printf("zhoucun : ");
    for(i = 0; i < n; i++)
    {
        if(strcmp(p[i].to, str3) == 0)
        {
            printf("%s ", p[i].name);
        }
    }
    printf("\n");
    printf("boshan : ");
    for(i = 0; i < n; i++)
    {
        if(strcmp(p[i].to, str4) == 0)
        {
            printf("%s ", p[i].name);
        }
    }
    printf("\n");
    return 0;
}


/***************************************************
User name: jk170734赵静
Result: Wrong Answer
Take time: 0ms
Take Memory: 108KB
Submit time: 2018-01-24 20:14:55
****************************************************/

#include<stdio.h>
#include<string.h>

struct stu
{
    char s[22], t[22];
    int r;
}p[300], q;

int main(void)
{
    int i, n, j, m, flag;

    while(~scanf("%d", &n))
    {
         for(i = 0; i < n; i++)
    {
        scanf("%d %s %s", &p[i].r, p[i].s, p[i].t);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(p[j].r > p[j + 1].r)
            {
                q = p[j], p[j] = p[j + 1], p[j + 1] = q;
            }
        }
    }
    m = 1;
    for(i = 0; i < n; i++)    //新技能， 用来删减相同的东西，important
    {
        flag = 1;
      for(j = 0; j < i; j++)
      {
          if(strcmp(p[j].s, p[i].s) == 0)
          {
              flag = 0;
          }
      }
      if(flag)
      {
          printf("%d %s\n", m, p[i].s);
          m++;
      }
    }
    }

    return 0;
}
