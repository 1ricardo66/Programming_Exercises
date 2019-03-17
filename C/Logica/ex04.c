//4. Faça um algoritmo que leia o ano de nascimento de uma pessoa, calcule e mostre sua idade e ,
//também verifique e mostre se ela já tem idade para votar (16 anos ou mais) e para conseguir a
//Carteira de Habilitação(18 anos ou mais). Utilize funções.

#include <stdio.h>
int calc_idade(int dia, int mes, int anoNasc){
  int idade;
  if (mes <= 9 && dia <=23){
    idade = 2018-anoNasc;
  }else if (mes >=9 && dia >=23){
    idade = 2018-anoNasc-1;
  }
  return idade;
}
int main (){
  int anoNasc , mes , dia,idade;

  printf("D M Y ");
  scanf("%d %d %d",&dia ,&mes ,&anoNasc);
  idade = calc_idade(dia,mes,anoNasc);
  if (idade >=18){
    printf("Maioridade\nPode votar e tirar a carteira");
  }else if(idade > 15 && idade < 18){
    printf("Você pode votar");
  }else{
    printf("Você não pode fazer nenhum dos dois");
  }
}
