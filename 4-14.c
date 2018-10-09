#include <stdio.h>

int main(void)
{   int a, b, c;
    double d;
    puts(" 请输入3个正数：");
    printf("kai shi:");    scanf("%d",&a);
    printf("jie shu:");    scanf("%d",&b);
    printf("jian ge:");    scanf("%d",&c);
    d=45.00;
    for(; a<=b;a+=c){
     printf("%dcm    %.2fkg\n",a,d);
     d=d+4.5;
}
    return (0);
}




