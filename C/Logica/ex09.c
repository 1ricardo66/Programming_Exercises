#include<stdio.h>
void imc_calc(float IMC){
  if (IMC < 18.5){
    printf("Abaixo do peso: %.2f",IMC);
  }else if(IMC >= 18.5 && IMC <25){
    printf("Peso Normal: %.2f",IMC);
  }else if (IMC>= 25 && IMC <30){
    printf("Acima do peso: %.2f\n", IMC );
  }else if (IMC >=30){
    printf ("Obeso %.2f\n", IMC);
  }

}
int main() {
    float P, H, IMC;
    printf("Digite o seu peso:\n");
    scanf("%f", &P);
    printf("Digite a sua altura:\n");
    scanf("%f", &H);
    IMC = P / (H*H);
    imc_calc(IMC);
}
