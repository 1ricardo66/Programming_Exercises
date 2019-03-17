// Escreva uma função em C que receba um vetor com três valores inteiros e diferentes como
// parâmetro e mostre-os em ordem decrescente.

#include <stdio.h>
int main (){
  int vet[3] = {10,21,-10};
  if(vet[0] > vet [1] && vet[0] > vet[2]){
    if (vet[1] > vet[2]){
      printf("%d, %d, %d",vet[0],vet[1],vet[2]);
    }else{
      printf("%d, %d, %d",vet[0],vet[2],vet[3]);
    }
  }if(vet[1] > vet [0] && vet[1] > vet[2]){
    if (vet[0] > vet[2]){
      printf("%d, %d, %d",vet[1],vet[0],vet[2]);
    }else{
      printf("%d, %d, %d",vet[1],vet[2],vet[0]);
    }
  }if(vet[2] > vet [1] && vet[2] > vet[3]){
    if (vet[1] > vet[2]){
      printf("%d, %d, %d",vet[2],vet[1],vet[3]);
    }else{
      printf("%d, %d, %d",vet[2],vet[3],vet[1]);
    }
  }

  return 0;
}
