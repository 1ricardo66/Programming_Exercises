#include <stdio.h>

void main(){
  int vet1[4] = {1,2,3,4} , vet2[4] = {5,6,7,8}, vet3[4],i;
  for (i=0 ; i <4 ; i++){
    vet3[i] = vet1[i]+vet2[i];
  }
  for(i=0;i<4;i++){
    printf("%d ",vet3[i]);
  }
}
