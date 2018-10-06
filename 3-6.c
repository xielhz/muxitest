#include <stdio.h>

int main(void)
{   int a, b, c, d, max;
    puts(" 请输入3个正数：");
    printf("shuo1:");    scanf("%d",&a);
    printf("shuo2:");    scanf("%d",&b);
    printf("shuo3:");    scanf("%d",&c);
    printf("shuo4:");    scanf("%d",&d);

    max=a;
    if(b>max) max = b;
    if(c>max) max = c;
    if(d>max) max=d;
    printf("最da值为%d\n",max);
       
   
    return (0);
}





