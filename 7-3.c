#include <stdio.h>

unsigned set(unsigned x,int pos);

int main()
{
   int a, b;
   do{
     printf("shuo1:");  scanf("%d",&a);
     printf("shuo2:");  scanf("%d",&b);
     if(b > 32)
       printf("qing chong shu");
   } while(b > 32);
   set(a, b);
   
   return (0);

}

unsigned set(unsigned x,int pos)
{   
    int a = 32 - pos;
    x = x >> a;
    if(x & 1U){
       x = x << a;
       printf("%u",x);
    }
    else{
      int a = a;
      x = x | 1U;
      x = x << a;
      printf("%u",x);
    }
    return (0);
}
