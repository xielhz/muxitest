#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("1:"); scanf("%d",&a);
    printf("2:"); scanf("%d",&b);
    if(a >= 60 && b >= 60)
       c = 1;
    if(a < 60 || b < 60)
       c = 2;
    if(a > 100 || b > 100)
       c = 0;
    switch (c){
       case 0 :puts("it is error"); break;
       case 1 :puts("it is past"); break;
       case 2 :puts("it is not past"); break;
    return (0);
    }
}

