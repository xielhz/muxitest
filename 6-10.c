#include <stdio.h>

void m(const int a[2][3], const int b[3][2], int c[2][2] ){
    int i, j, k;
    for(i = 0;i <= 2;++i){
     for(j = 0;j <= 2;++j){
      for(k = 0;k <= 3;++k){
       c[i][j]+=a[j][k]*b[k][j];
       }
      }
     }
}
int main(){   
    int i, j;
    int a[2][3] = { {1,2,3}, {4,5,6} };
    int b[3][2] = { {1,5}, {5,3}, {8,1} };
    int c[2][2] = {0};
    m(a, b, c);
    for(i=0;i<2;++i){
     for(j=0;j<2;++j)
      printf("%5d",c[i][j]);
     putchar('\n');
    }   
    return (0);
}



