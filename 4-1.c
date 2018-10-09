#include <stdio.h>

int main(void)
{ int a;
   do{
      printf("qing shu ru yi ge zheng shuo:\n");
      scanf("%d",&a);
      if(a<0)
        printf("qing chong xin shu ru");
      } while (a<0);
    printf("%d de ni xiang wei:",a);
    do{
      printf("%d",a%10);
      a=a/10;
     } while (a>0);

    return (0);
}


