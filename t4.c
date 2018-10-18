#include <stdio.h>

int gcdf(int vx,int vy)
{   
    return (vy == 0 ? vx : gcdf(vy,vx%vy));
}

int gcd(int va,int vb)
{ 
    return(va >vb ? gcdf(va,vb) : gcdf(vb,va));
}

int main()
{
    int a, b;
    printf("1:");  scanf("%d",&a);
    printf("2:");  scanf("%d",&b);
    
    printf("%d",gcd(a,b));

    return (0);
}

