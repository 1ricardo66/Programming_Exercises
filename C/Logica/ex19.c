#include <stdio.h>
float valorF(float valor){
    return valor*1.1;
}
int main(){
    float valorD,total=0;
    int n;
    printf("\nValor da prestacao e a quantidade de prestacoes: ");
    scanf("%f %d",&valorD,&n);
    for(int i=0;i<n;i++)
        total+=valorF(valorD);
    printf("\nCada prestacao vai ficar em R$%.2f reais, com o valor final sendo R$%.2f reais e o prejuizo do comerciante em R$%.2f reais."
           ,valorF(valorD),total*0.9,total-(total*0.9));
}
