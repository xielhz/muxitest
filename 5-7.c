#include <stdio.h>

int main(void)
{   
    int i,j;
    int a[2][3]={ {1,2,3}, {4,5,6} };
    int b[3][2]={ {1,5}, {5,3}, {8,1} };
    int c[2][3]={0};
    for(i=0;i<2;++i)
{    for(j=0;j<3;++j)
 {    c[i][j]=a[i][j]+b[j][i];
 }
}
    for(i=0;i<2;++i)
{
     for(j=0;j<3;++j)
      printf("%3d",c[i][j]);
     putchar('\n');
}   
    return (0);
}


