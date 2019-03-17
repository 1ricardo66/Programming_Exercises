// #include <stdio.h>
// #include <stdlib.h>
// int main (){
//   char sono[10],i=0;
//   fgets(sono,10,stdin);
//   printf("%s",sono );
//   return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
//
// int main (){
//
//   char nome[50];
//   int idade;
//
//   printf("Digite seu nome: ");
//   fgets(nome,50,stdin);
//   printf("Digite sua idade: ");
//   scanf("%d",&idade);
//
//   idade >= 18 ? printf("Você é maior de idade") : printf("Você é menor de idade");
//
//   return 0;
// }




//
//
//
//
//
//
// #include <stdio.h>
// #include <stdlib.h>
//
// int idade;
// char nome[20];
// void entrada(){
//   printf("Digite seu nome: ");
//   fgets(nome,50,stdin);
//   printf("Digite sua idade: ");
//   scanf("%d",&idade);
// }
//
// int processamento(){
//   if (idade >=18){
//     return 0;
//   }else{
//     return 1;
//   }
// }
// void saida(){
//   processamento() == 0 ? printf("Maior de idade") : printf("Menor de idade");
//   printf("%d",processamento());
// }
// int main (){
//   entrada();
//   processamento();
//   saida();
//   return 0;
// }
//mostrar se o animal é grande porte ou pequeno porte
// mostrar o veterinario responsavel
//maior que 50kg
#include <stdio.h>
#include <stdlib.h>

int main (){

  struct animal {
    char nome[60] , raca[20], sexo[10], cor[20];
    int idade;
    float peso,altura;
  };

  struct veterinario{
    char nome[60], especialidade[60];
  };
  struct veterinario veterinarioGrande;
  struct veterinario veterinarioPequeno;
  struct animal animal1;

  veterinarioGrande.nome = "Irineu";
  veterinarioGrande.especialidade = "Grande porte";
  

  return 0;
}
