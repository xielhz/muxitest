#include <stdio.h>

unsigned set(unsigned x,int pos,int c);

int main()
{
   int a, b, c;
   do{
     printf("shuo1:");  scanf("%d",&a);
     printf("shuo2:");  scanf("%d",&b);
     printf("shuo3:");  scanf("%d",&c);
     if(b > 16 || c > 16)
       printf("qing chong shu");
   } while(b >> 16 || c > 16);
   set(a, b, c);
   
   return (0);

}

unsigned set(unsigned x,int pos,int c)
{   
    int a = 16 - pos;
    int b = 16 - c;
    x = x >> a;
    x = x >> b;
    if(x & 1U){
       x = x << b;
       printf("%u",x);
    }
    else{
      x = x | 1U;
      x = x << c;
      printf("%u",x);
    }
    return (0);
}

