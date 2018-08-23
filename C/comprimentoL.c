#include <stdio.h>
float func(float comprimento , float largura , float altura){
  float total = comprimento * largura * altura;
  return total;

}

int main(){
  float comprimento , largura , altura , volume;
  printf("Digite o Comprimento: ");
  scanf("%f",&comprimento);
  printf("Digite a Largura: ");
  scanf("%f",&largura);
  printf("Digite a Altura: ");
  scanf("%f",&altura);
  volume = func(comprimento,largura,altura);
  printf("O volume é: %.2f",volume);
}
