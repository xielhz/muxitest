#include <stdio.h>

int main(void)
{   int a, b, c, d;
    int e=0;
    int f=0; 
    printf("zhuo:");   scanf("%d",&a);
    printf("you:");    scanf("%d",&b);
    if(a==1)
      a+=1;
    for(c=a;c<=b;++c)
  {    for(d=a;d<=c;++d)
   {    if(c%d==0)
        break;
   }
    if(c==d)
   {    printf("%4d",c);
       e+=4;
       f+=1;
       if(e==36)
         printf("\n");
    }
   }
    printf("\nthe number is %d",f);
 }
