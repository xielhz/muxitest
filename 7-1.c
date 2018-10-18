#include <stdio.h>
int main()
{
    unsigned a = 4;
    unsigned b = 16;
    if(b == a << 2)
      printf("1");
    else
      puts("0"); 
    printf("%d,%d",a,b);
    return (0);
}

