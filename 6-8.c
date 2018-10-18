#include <stdio.h>

void r(int vc[], int c){
    int i;
    for(i=0;i<c/2;++i){ 
      int a;
      a = vc[i];
      vc[i] = vc[c-1-i];
     vc[c-1-i] = a;
     }
  
}


