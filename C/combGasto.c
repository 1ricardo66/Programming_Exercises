#include <stdio.h>
float distanciaP(int tempo, float velocidadeM){
  float distancia = tempo*velocidadeM;
  return distancia;
}

float litros_usados (float distancia){
  float litros = distancia / 12;
  return litros;
}

int main(){
  int tempo;
  float velocidadeM,distanciaT,litrosU;

  printf("Tempo gasto na viagem ");
  scanf("%d",&tempo);
  printf("Velocidade média: " );
  scanf("%f",&velocidadeM);
  distanciaT = distanciaP(tempo,velocidadeM);
  litrosU = litros_usados(distanciaT);
  printf("Distancia percorrida %.2f KM \nLitros utilizado: %.2fL",distanciaT,litrosU);


}
