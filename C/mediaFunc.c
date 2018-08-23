#include <stdio.h>

int func(int a, int b){
return (a+b)/2;
}
int main(){
  int val1, val2;
  printf("Digite o valor 1 e 2 : ");
  scanf("%d %d",&val1 , &val2);
  float media;
  media = func(val1,val2);
  printf("Média: %.2f",media);

}
