#include <stdio.h>

int main(void)
{  
int i, j, a ;
printf("ji cheng:");
scanf("%d",&a);   
for(i=1;i<=a;++i)
{for(j=1;j<=a-i;++j)
 {putchar(' ');
 }
 for(j=1;j<=2*i-1;++j)
 {putchar('*');
 }putchar('\n');
}
   
    return (0);
}



