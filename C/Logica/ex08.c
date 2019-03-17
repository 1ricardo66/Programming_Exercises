#include<stdio.h>
void retorna (int n1, int n2){
  int sinal;
  printf("Sinal da operação:\n[0] Adição\n[1] Subtração\n[3] Divisão\n[4]Multiplicação  ");
  scanf("%d",&sinal);
  if (sinal == 0){
    printf("Total: %d",n1+n2);
  }else if(sinal == 1){
    printf("Total: %d",n1-n2);
  }else if(sinal == 4){
    printf("Total: %d", n1*n2);
  }else if(sinal == 3){
    printf("Total: %d",n1/n2);
  }
}
int main (){
  int n1,n2;
  printf("Digite N1");
  scanf("%d",&n1);
  printf("Digite N2");
  scanf("%d",&n2);
  retorna(n1,n2);
}
