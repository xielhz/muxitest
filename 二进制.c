#include <stdio.h>
int bits(unsigned x)
{
    int count = 0;
    while(x){
     if(x & 1U) count++;
     x >>= 1;
    }
    return (count);
}


int bbits()
{
    return (bits(~0U));
}

void pbits(unsigned x)
{
    int i;
    for(i = bbits() - 1; i >= 0; i--)
      putchar((x >> i) & 1U ? '1' : '0');
}

int main()
{
   unsigned nx;
    printf("shuo:");  scanf("%u",&nx);
    pbits(nx);
    putchar('\n');

    return (0);
}
