#include <stdio.h>
#include <math.h>

void raiz_calc(int a, int b, int c){
    printf("\nCalculando raizes de (%d)x^2 + (%d)x + (%d).\n",a,b,c);
    int delta;
    delta=pow(b,2)-4*(a*c);
    if(delta==0){
        printf("\nRaiz Unica é: %.2f.\n",(-b+sqrt(delta))/(2*a));
    }
    else if(delta>0){
        printf("\nRaiz [1] é: %.2f .\n",(-b+sqrt(delta))/(2*a));
        printf("\nRaiz [2] é: %.2f .\n",(-b-sqrt(delta))/(2*a));
    }
    else{
        printf("\nNao existem raizes reais.\n");
    }
}
//
int main(){
    int a,b,c;
    printf("\nColoque o valor de A: ");
    scanf("%d",&a);
    printf("\nColoque o valor de B: ");
    scanf("%d",&b);
    printf("\nColoque o valor de C: ");
    scanf("%d",&c);
    raiz_calc(a,b,c);
}
