#include <stdio.h>

int main(void)
{
    int i;
    int va[8];
    for(i=0;i<8;++i)
{    printf("va[%d]:",i);
     scanf("%d",&va[i]);
}
 
    for(i=0;i<4;++i)
{    int a;
     a=va[i];
     va[i]=va[7-i];
     va[7-i]=a;
}
    for(i=0;i<8;++i)
{    printf("va[%d]=%d\n",i,va[i]);
}
    return (0);
}



