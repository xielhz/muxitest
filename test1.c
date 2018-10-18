#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("shu ru san ge shuo:");
    scanf("%d",&a);  scanf("%d",&b);  scanf("%d",&c);
    if (a+b > c && b+c > a && c+a > b){ 
      if(a == b && b == c)
         printf("1");
      else if(a == b || b == c || a == c)
         printf("2");
       else  {
         printf("3");
      }
      }
       else  {
             printf("0");
      }
   
    return (0);
}
