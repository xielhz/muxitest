#include <stdio.h>
int main()
{
   static int a[3][3];
   int i, j;
   for(i = 0;i <= 2;++i){
    for(j = 0;j <= 2;++j){
     a[i][j] = 0;
    }
   }

    return (0);
}
