#include <stdio.h>

int main(void)
{   int a, b, c, min;
    puts(" 请输入3个正数：");
    printf("shuo1:");    scanf("%d",&a);
    printf("shuo2:");    scanf("%d",&b);
    printf("shuo3:");    scanf("%d",&c);

    min=a;
    if(b < min) min = b;
    if(c < min) min = c;
    printf("最小值为%d\n",min);
       
   
    return (0);
}




