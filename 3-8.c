#include <stdio.h>

int main(void)
{   int a, b, c, min;
    puts(" 请输入3个正数：");
    printf("shuo1:");    scanf("%d",&a);
    printf("shuo2:");    scanf("%d",&b);
    printf("shuo3:");    scanf("%d",&c);
    min=a;
    min = (b<a)?b:a;
    min = (c<min)?c:min;
       
   
    return (0);
}





