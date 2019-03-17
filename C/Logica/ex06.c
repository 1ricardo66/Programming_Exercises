#include <stdio.h>
void retorna(int idade){
  if (idade >=5 && idade <=7){
    printf("Infantil A");
  }else if (idade >= 8 && idade <=10){
    printf("Intantil B");
  }else if(idade >= 11 && idade <= 13){
    printf("Juvenil A");
  }else if(idade >= 14 && idade <= 17){
    printf("Juvenil B");
  }else if(idade >=18){
    printf("Maiores de 18");
  }else{
    printf("Erro");
  }
}
int main (){
  int idade;
  printf("Digite sua idade: ");
  scanf("%d",&idade);
  retorna(idade);
}
