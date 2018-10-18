#include <stdio.h>

void alert(int a)
{   while(a-->0)
     putchar('\a');

}

int main(void)
{
    int a;
    printf("1:");   scanf("%d",&a);
  
    alert(a);

    return(0);
}


