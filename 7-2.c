#include <stdio.h>

unsigned rro(unsigned x,int n)
{
    int b;
    b = x >> n;
    return (b);
}
int main()
{
    int a = 123;
    printf("%u",rro(a,4));
    
    return (0);
}

