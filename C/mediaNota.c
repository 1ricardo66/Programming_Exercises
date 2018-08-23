/*Criar um programa em Linguagem C que receba notas de três provas e calcular a sua média.*/
#include <stdio.h>
float media(){
  float n1,n2,n3,media;
  printf("Digite as três notas: ");
  scanf("%f %f %f",&n1 ,&n2, &n3);
  media = (n1+n2+n3) / 3;
  return media;
}
void main(){
  float total = media();
  printf("%.2f",total);

}
