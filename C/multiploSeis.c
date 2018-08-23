/*Armazenar 8 Números em um vetor e mostrar todos os números. Ao final, teremos o total de números múltiplos de seis digitados.*/
#include <stdio.h>
#include <stdlib.h>
void main (){
  int vet[8],i,cont=0;
  for (i=0 ; i < 8 ; i++){
    vet[i] = rand()%50;
    printf("%d ",vet[i]);
    vet[i]%6 == 0 ? cont++ : cont;
  }
  printf("\n%d Numeros multiplos de 6",cont);
}
