`#include <stdio.h>

void max(int a[3][5]){
    int i, j;
    for(i = 0;i <= 2;++i){
     int max = a[i][0];
     for(j = 0;j <= 4;++j){
      if(max < a[i][j])
       max = a[i][j];
     }
    printf("%d de zui da zhi:%4d",i,max);
    }
}
void ping(int a[3][5]){
     int i, j;
     for(j = 0;j <= 4;++j){
      int b = 0;
      for(i = 0;i <= 2;++i){
       b+=a[i][j];
      }
     printf("%d de ping jun zhi:%4.2f",j,(double) (b/3));
     }
}        
int main()
{
   int i, j;
   int a[3][5];
   for(j = 0;j <= 4;++j){
     for(i = 0;i <= 2;++i){
      printf("ci xue shen cheng ji:");
      scanf("%d",&a[i][j]);
     }
     putchar('\n');
    }
    max(a);
    putchar('\n');
    ping(a);
}
