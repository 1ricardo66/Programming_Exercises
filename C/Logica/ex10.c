#include <stdio.h>
#include <math.h>
int retorna (int numero){
  return round(sqrt(numero));
}
int main (){
  int numero,resultado;
  printf("Digite o numero:");
  scanf("%d",&numero);
  resultado = retorna(numero);
  printf("A raiz inteira de %d é %d",numero,resultado);
}
