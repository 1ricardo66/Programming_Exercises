// Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule
//seu peso ideal, utilizando as seguintes fórmulas:

#include <stdio.h>
float homem(float param){
  param = (72.7*param)-58;
  return param;
}
float mulher (float param){
  param = (62.1*param)-44.7;
  return param;
}
int main (){
  int sexo;
  float altura;
  printf("Digite sua altura: ");
  scanf("%f",&altura);
  printf("Digite seu sexo [0]Homem - [1]Mulher: ");
  scanf("%d",&sexo);
  if (sexo == 0){
    printf("Seu peso ideal é: %.2f",homem(altura));
  }else{
    printf("Seu peso ideal é: %.2f",mulher(altura));
  }
}
