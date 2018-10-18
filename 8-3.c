#include <stdio.h>
#define  diff(x,y,z) (z = y,y = x,x = z)
int main ()
{ 
    int a = 1;
    int b = 2;
    int c;
    diff(a,b,c);
    printf("%d,%d",a,b);
  
    return (0);
}



