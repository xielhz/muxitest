#include <stdio.h>

int main(void)
{   int a, b;
    puts(" 请输入2个正数：");
    printf("shuo1:");    scanf("%d",&a);
    printf("shuo2:");    scanf("%d",&b);
    switch (a>b) {
	     case 1 : puts ("1"); break;
	     case 0 : puts ("2"); break;
	     default : puts("0"); break;
   }
    return (0);
}




