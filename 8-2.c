#include <stdio.h>
#define  diff(x,y) (x > y ? x : y)
int main ()
{ 
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    printf("%d",diff(diff(a,b),diff(c,d)));
  
    return (0);
}

