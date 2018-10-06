#include <stdio.h>

int main(void)
{   int a, b;
    puts(" 请输入2个正数：");
    printf("shuo1:");    scanf("%d",&a);
    printf("shuo2:");    scanf("%d",&b);
    if (a>b&&a-b<10)
      puts ("1");
    else if (b-a<10)
      puts("1");
    else
      puts("0");

    return (0);
}




