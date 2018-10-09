#include <stdio.h>

int main(void)
{   
    int a, b;
    printf(" 请输入一个正数：" );
    scanf("%d",&a);
    b=1;
    while (b<=a&&a>0) {
       printf("%d",b++);
        
       putchar('\n');
  }
 
          
   
    return (0);
}




