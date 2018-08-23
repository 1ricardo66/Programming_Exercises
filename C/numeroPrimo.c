/*Criar um programa em linguagem C que verifique se um numero é primo*/
#include<stdio.h>
int verifica(){
  int numero , divisao=0 , i;
  printf("Digite um numero: ");
  scanf("%d",&numero);
  for(i=1 ; i <= numero ; i++){
    if(numero%i == 0){
      divisao++;
    }
  }
  divisao == 2 ? printf("O numero %d é primo ",numero) : printf("O numero %d não é primo ",numero);
  return 0;
}

void main(){
  int resultado = verifica();

}
