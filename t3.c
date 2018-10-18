#include <stdio.h>

int main(void)
{
    int i, j;
    for(i = 1;i < 4;++i) {
      for(j = 1;j < i;++j)
         putchar(' ');
      for(j = 1;j <= 2*(3-i)+1;++j)
         putchar('*');
      printf("\n");
    }
      printf(" *** \n");
      printf("*****\n");
   
    return (0);
}


