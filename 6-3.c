#include <stdio.h>

int cube(int a)
{    
 
    return (a*a*a);
}

int main(void)
{
    int a;
    printf("shu ru yi ge zheng shuo:\n");
    printf("1:");   scanf("%d",&a);
  
    printf("cube:%d\n",cube(a));

    return(0);
}

