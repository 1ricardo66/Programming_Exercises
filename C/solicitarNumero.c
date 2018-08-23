/*
Solicitar um número entre 1 e 4. Se a pessoa digitar um número diferente, mostrar a mensagem "entrada inválida" e solicitar o número novamente se digitar correto mostrar o número digitado.
*/
#include <stdio.h>
void main(){
  int numero;
  do{
    printf("Digite um numero: ");
    scanf("%d",&numero);
    if(numero < 1 || numero >4){
      printf("Entrada inválida\nDigite um numero entre 1 e 4: ");
      scanf("%d",&numero);
    }
    numero > 0 && numero <5 ? printf("\n%d\n",numero) : numero; /* if (numero > 0 && numero <5){.....}*/
  }while(numero > 0 && numero <5);
}
