#include <stdio.h>

int main (){
  int vet[6]= {1,2,3,4,5,6};

  for (int i = 0 ; i < 6 ; i++){
    printf("%p\n",&vet[i]);
  }


}