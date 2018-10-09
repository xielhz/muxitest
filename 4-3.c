#include <stdio.h>

int main(void)
{   int a, b, c;
    puts(" 请输入2个正数：");
    printf("shuo1:");    scanf("%d",&a);
    printf("shuo2:");    scanf("%d",&b);
    c=0;
    if(a<b)
     do{
       c=a+c;
        a=a+1;
      } while (a<=b);
    else
      do{
         c=c+b;
         b=b+1;
        } while (b<=a);

    printf("%d",c);      
   
    return (0);
}


