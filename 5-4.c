#include <stdio.h>

int main(void)
{
int i;
int va[5]={45,54,43,4};
int vb[5];
for(i=0;i<5;++i)
{vb[i]=va[4-i];
}
puts("va  vb");
puts("------");
for(i=0;i<5;++i)
{printf("%2d ，%2d\n",va[i],vb[i]);
}
return (0);
}


