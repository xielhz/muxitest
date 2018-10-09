#include <stdio.h>

int main(void)
{   
    int a, b, c;
    printf(" 请输入一个正数：" );
    scanf("%d",&b);
    c=0;
    for(a=1;a<=b;++a) {
       ++c;
       if (c<10){
         printf("%d",c);
       }
      else {
         c=1;
         printf("%d",c);
     }
  }
          
   
    return (0);
}



