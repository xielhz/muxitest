#include <stdio.h>

int main(void)
{ int a, b;
   do{
      printf("qing shu ru yi ge zheng shuo:\n");
      scanf("%d",&a);
      if(a<0)
        printf("qing chong xin shu ru");
      } while (a<0);
    printf("%d de wei shuo wei:",a);
     b=0;
    do{
        a=a/10;
        b+=1;
       } while (a>0);
    printf("%d",b);
    return (0);
}




