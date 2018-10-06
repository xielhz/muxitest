#include <stdio.h>

int main(void)
{   int a, b;
    puts(" 请输入2个正数：");
    printf("shuo1:");    scanf("%d",&a);
    printf("shuo2:");    scanf("%d",&b);
    if (a>b)
      puts ("1");
    else if (a<b)
      puts ("2");
    else
      puts("0");

    return (0);
}



