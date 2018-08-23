/*
Armazenar 15 números inteiros em um vetor NUM e mostrar uma listagem numerada contendo o número e uma das mensagens:par ou impar
*/
#include <stdio.h>
#include <stdlib.h> /*Lib para usar a função rand*/
void main(){
  int num[15],i;
  for (i = 0 ; i < 15 ; i++){
    num[i] = (rand()%50);
    if(num[i]%2 == 0){
      printf("%d é Par\n",num[i]);
    }else{
      printf("%d é Impar\n",num[i]);
    }
  }
}
