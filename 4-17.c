#include <stdio.h>

int main(void)
{  
int i, j, a;
printf("ji cheng:");
scanf("%d",&a);   
for(i=a;i>=0;--i)
{for(j=1;j<=a-i;++j)
 {putchar(' ');
 }
 for(j=1;j<=i;++j)
 {putchar('*');
 }putchar('\n');
}
   
    return (0);
}



