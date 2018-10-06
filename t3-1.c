#include <stdio.h>

int main(void)
{   int a, b;
    puts(" 请输入2个正数：");
    printf("shuo1:");    scanf("%d",&a);
    printf("shuo2:");    scanf("%d",&b);
    if (a%b)
      puts ("b是a的约数");
    else 
      puts ("a不是b的约数");
   
    return (0);
}



