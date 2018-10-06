#include <stdio.h>

int main(void)
{   
    double a;
    printf(" 请输入一个数：" );
    scanf("%lf",&a);
    
    printf(" 标重为%.1f.\n", (a-100)*0.9);
   
    return (0);
}



