#include <stdio.h>
float circuloArea(int raio){
  float area;
  area = 3.14 * (raio*raio);
  return area;
}
int main(){
  int raio;
  printf("Digite o raio: ");
  scanf("%d",&raio);
  printf("A area é: %.2f",circuloArea(raio));
}
