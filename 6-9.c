#include <stdio.h>

void r(int v1[],const int v2[], int c){
    int i;
    for(i = 0;i < c/2;++i){ 
      int a;
      a = v1[i];
      v1[i] = v1[c-1-i];
      v1[c-1-i] = a;
    }
     
   
}


