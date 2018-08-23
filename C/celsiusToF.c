#include <stdio.h>
int fahrenheit(int c){
  int f;
  f = (9*c+160)/5;
  return f;
}
int main (){
  int celsius,fah;
  printf("Digite a temperatura em °C:");
  scanf("%d",&celsius);
  fah = fahrenheit(celsius);
  printf("%d °C equivale a %d °F",celsius,fah);
}
