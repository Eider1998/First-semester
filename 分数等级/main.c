#include<stdio.h>
int main(void)
{
    int i, n, a, r, b, c, d, e;
    r = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a);

     switch(a / 10)
     {
      case 10:
      case 9:
          r++;
          break;
      case 8:
          b++;
          break;
      case 7:
          c++;
          break;
      case 6:
          d++;
          break;
      default :
          e++;
          break;
     }

    }
    printf("A %d\nB %d\nC %d\nD %d\nE %d\n", r, b, c, d, e);
    return 0;
}
