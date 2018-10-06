#include <stdio.h>

int main(void)
{   int a, b, c;
    puts(" 请输入3个正数：");
    printf("shuo1:");    scanf("%d",&a);
    printf("shuo2:");    scanf("%d",&b);
    printf("shuo3:");    scanf("%d",&c);

    if (a==b && b==c)
     puts("3xiangdeng");
     else if (a==b || c==a || b==c)
     puts("2");
     else
     puts("0");

    return (0);
}
