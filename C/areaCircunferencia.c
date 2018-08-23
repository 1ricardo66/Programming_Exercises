#include <stdio.h>
#include <math.h>
float get_Area(float raio){
  float r = 3.14159 , area;
  area = r * pow(raio,2);
  return area;
}

int main(){
  float raio,total;
  printf("Digite o valor do raio: ");
  scanf("%f",&raio);
  total = get_Area(raio);
  printf("Area: %.2f",total );
}
