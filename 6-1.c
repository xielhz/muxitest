#include <stdio.h>

int min3(int a,int b,int c)
{    
    int min=a;
    if(b<min) min=b;
    if(c<min) min=c;
    return (min);
}

int main(void)
{
    int a,b,c;
    printf("shu ru san ge zheng shuo:");
    printf("1:");   scanf("%d",&a);
    printf("2:");   scanf("%d",&b);
    printf("3:");   scanf("%d",&c);

    printf("zui xiao zhi :%d\n",min3(a,b,c));

    return(0);
}
