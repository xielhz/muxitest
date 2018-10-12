#include <stdio.h>

int main(void)
{   int c;
    printf("shuzhugeshuo:");
    scanf("%d",&c);
    int i;
    int va[c];
    for(i=0;i<c;++i)
{    printf("va[%d]:",i);
     scanf("%d",&va[i]);
}
 
    for(i=0;i<c/2;++i)
{    int a;
     a=va[i];
     va[i]=va[c-1-i];
     va[c-1-i]=a;
}
    for(i=0;i<c;++i)
{    printf("va[%d]=%d\n",i,va[i]);
}
    return (0);
}

