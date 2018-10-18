#include <stdio.h>

int min3(int a,int b)
{    
    int min=a;
    if(b<min) min=b;
  
    return (min);
}

int main(void)
{
    int a,b;
    printf("shu ru san ge zheng shuo:\n");
    printf("1:");   scanf("%d",&a);
    printf("2:");   scanf("%d",&b);
 

    printf("zui xiao zhi :%d\n",min3(a,b));

    return(0);
}

