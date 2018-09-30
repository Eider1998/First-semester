/*
#include<stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;

    swap(i, j);
    printf("%d %d\n", i, j);
    return 0;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}


 #include<stdio.h>

 float compute_GPA(char grades[], int n);

 int main(void)
 {
     char grades[5] = {'A', 'B', 'C', 'D', 'F'};
     int a;
     float ave;

     scanf("%d", &a);

     ave = compute_GPA(grades, a);
     printf("%f\n", ave);
     return 0;
 }

 float compute_GPA(char grades[], int n)
 {
     float m;
     int total = 0, i;

    for(i = 0; i <= n - 1; i++)  //注意只要是 数组 下标就是 从 0 开始。
    {
  switch(grades[i])   //因为给字符一些确定的数字所以想到利用 switch 语句 来编写。
        {
    case 'A':
        total += 4;
        break;
    case 'B':
        total += 3;
        break;
    case 'C':
        total += 2;
        break;
    case 'D':
        total += 1;
        break;
    case 'F':
        total += 0;
        break;
        }
    }
    m = total / n;
     return m;
 }


 #include<stdio.h>

 int gcd(int m, int n);   //最小公倍数等于两个数的乘积除以最大公约数。

 int main(void)
 {
     int a, b, t, x;

     scanf("%d %d", &a, &b);
     if(a > b)
     {
         t = a, a = b, b = t;
     }

     x = gcd(a, b);
     printf("%d\n", x);
     return 0;
 }

 int gcd(int m, int n)
 {
     int r;

     while(m != 0)
     {
         r = n % m;
         n = m;  //如果这一步放到下一步的下面，则n最终也就是等于r而已，达不到任何的效果。
         m = r;
     }

     return n;
 }



 #include<stdio.h>

 int day_of_year(int m, int d, int y1);

 int main(void)
 {
     int m, d, y1, t;

     scanf("%d %d %d", &m, &d, &y1);

     t = day_of_year(m, d, y1);
     printf("%d\n", t);
     return 0;
 }

 int day_of_year(int m, int d, int y1)
 {
     int y = 0, i;

     if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
     {
        int a[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(i = 0; i < m; i++)
        {
            y += a[i];
        }
        y += d;
     }
     else
     {
         int b[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
         for(i = 0; i < m; i++)
         {
             y += b[i];
         }
         y  += d;
     }
     return y;
 }



 #include<stdio.h>

 int digit(int n, int k);

 int main(void)
 {
     int a, b, t;

     scanf("%d %d", &a, &b);

     t = digit(a, b);
     printf("%d\n", t);
     return 0;
 }

 int digit(int n, int k)
 {
     int m, t;

     t = 0;
     while(t != k)
     {
         m = n % 10;
         n = n / 10;
         t++;
     }
     return m;
 }





 double inner_product(double a[], double b[], int n)

 {
     int i;
     double m;

     for(i = 0;  i < n; i++)
     {
         m += a[i] * b[i];
     }

     return m;
 }



 int evaluate_position(char board[8][8])
{
    int i, j, n, value = 0;
    n = 8;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            switch(board[i][j])
            {
            case 'Q':
                value += 9;
                break;
            case 'R':
                value += 5;
                break;
            case 'B':
                value += 3;
                break;
            case 'N':
                value += 3;
                break;
            case 'P':
                value += 1;
                break;
                case 'q':
                value -= 9;
                break;
            case 'r':
                value -= 5;
                break;
            case 'b':
                value -= 3;
                break;
            case 'n':
                value -= 3;
                break;
            case 'p':
                value -= 1;
                break;

            }
        }
    }
    return value;
}



#include<stdio.h>

void pb(int n);

int main(void)
{
    int a;

    scanf("%d", &a);
    pb(a);
    return 0;
}


void pb(int n)
{                               // 打印出相应的二进制数。
    if(n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}


#include<stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
    int a[100], b, i;

    scanf("%d", &b);
    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    selection_sort(a, n);
    return 0;
}

void selection_sort(int a[], int n)
{
    int max, i, j, t;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if()
        }
    }
}



#include<stdio.h>

int power(int x, int n);

int main(void)
{
    int a, b, t;

    scanf("%d %d", &a, &b);
    t = power(a, b);
    printf("%d\n", t);
    return 0;
}

int power(int x, int n)
{
  int i;

  for(i = 1; i < n; i++)
  {
      x *= x;
  }
  return x;
}

*/

