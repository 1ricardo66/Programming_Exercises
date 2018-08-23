/*
Solicitar a idade de Várias pessoas e imprimir: Total de pessoas com menos de 21 anos. Total de pessoas com mais de 50 anos. O programa termina quando idade for = -99
*/
#include <stdio.h>
void main(){
  int idade , contMenor=0, contMaior=0;
  do {
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    idade < 21 && idade > 0 ? contMenor++ : contMenor;
    idade > 50 ? contMaior++ : contMaior;
  } while(idade != -99);
  printf("Menor que 21 : %d \nMaior que 50 : %d ",contMenor,contMaior);
}
