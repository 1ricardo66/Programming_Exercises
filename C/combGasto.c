#include <stdio.h>

float distanciaP(int tempo, float velocidade){
  return tempo*velocidade;
}

float litros_usados(float distancia){
   return (distancia/12.0);
}

int main(){
  printf("\n||///////////////////////////////////////////////////////||");
  printf("\n|| GRUPO 1 - Marcos Tulio , Erik de Jesus, Paulo Ricardo ||");
  printf("\n||///////////////////////////////////////////////////////||");
  int tempo;
  float velocidade;
  printf("\n\nTempo gasto na viagem (em horas): ");
  scanf("%d",&tempo);
  printf("Velocidade média: " );
  scanf("%f",&velocidade);
  printf("Distância percorrida %.2f KM. \nLitros : %.2f L.\n\n",distanciaP(tempo,velocidade),
  litros_usados(distanciaP(tempo,velocidade)));

}
