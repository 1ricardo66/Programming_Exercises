#include <stdio.h>
void consumoC(float c,float l,float k){
    printf("\nO carro pode andar %.2f quilometros com o tanque cheio, com a autonomia de %.2f quilometros/litro.\n\n",c*(k/l),k/l);
}
int main(){
    float totalT,qtdLitros,quilometragem;
    printf("\nCapacidade do tanque, Quantidade de litros e a Quilometragem: \n\n");
    scanf("%f %f %f",&totalT,&qtdLitros,&quilometragem);
    consumoC(totalT,qtdLitros,quilometragem);
}
