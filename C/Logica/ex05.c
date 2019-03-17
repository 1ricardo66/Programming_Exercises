#include <stdio.h>
void retornaP(int num){
  if (num == 1){
    printf("Alimento nao perecivel\n");
  }else if(num>=2 && num<=4){
  printf("Alimento perecivel\n");
 }else if(num == 5 || num == 6){
  printf("Vestuario\n");
 }else if(num == 7){
  printf("Higiene pessoal\n");
 }else if(num >= 8 && num <=15){
  printf("Limpeza e utensilios domesticos\n");
 }else{
  printf("Valor invalido\n");
 }
}
int main(){
 int num;
 while(1){
     printf("Digite o valor desejado de 1 a 15: ");
     scanf("%d",&num);
     retornaP(num);
 }
 return 0;
}
