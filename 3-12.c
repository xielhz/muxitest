#include <stdio.h>

int main(void)
{   int a;
    puts(" 请输入月份：");
    scanf("%d",&a);
  
    switch (a>=3&&a<=5) {
	     case 1 : puts ("chun"); break;
	     case 0 : switch (a>=6&&a<=8){
                             case 1 : puts("xia"); break;
                             case 0 : switch (a>=9&&a<=11){
                                             case 1 : puts("qiu"); break;
                                             case 0 : puts("dong"); break;
    }
   }
 }
    return (0);
}





