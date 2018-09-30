#include<stdio.h>
void print(int a);
int main(void)
{
    int b;

    scanf("%d", &b);
    print(b);
    return 0;
}
void print(int a)
{
     int i;

     if(a != 0)
    {
      for(i = 1; i <= a; ++i)
      {
        printf("%d, ", a);
      }
      printf("\n");
       print(a-1);
       for(i = 1; i <= a; ++i)
      {
        printf("%d, ", a);
      }
      printf("\n");
    }

}
