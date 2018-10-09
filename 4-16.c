#include <stdio.h>

int main(void)
{   int a, b,i, j;
    puts(" 请输入2个正数：");
    printf("chang:");    scanf("%d",&a);
    printf("gao:");    scanf("%d",&b);
    if(a>b){
        for(i=1;i<=b;i++){
           for(j=1;j<=a;j++){
             printf("*");
            }
           putchar('\n');
            } 
        }
    else {
      for(i=1;i<=a;i++){
           for(j=1;j<=b;j++)
               printf("&");
           putchar('\n');
             }
       }

    return (0);
}



