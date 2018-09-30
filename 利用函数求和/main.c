#include<stdio.h>
int add(int a, int b);   // 函数的声明
int main(void)
{
    int c, d, sum = 0;

    scanf("%d %d", &c, &d);      //函数的调用
    sum = add(c, d);
    printf("%d", sum);
    return 0;
}
int add(int a, int b)           //函数的定义
{
    int sum;
    sum = a + b;
    return sum;                //返回一个值给主调函数main（）

}
