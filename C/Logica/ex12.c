#include <stdio.h>

float calc(float x){
    if(x==1)
        return 1.0;
    else
        return ( 1.0 / x ) + calc(x-1) ;
}
int main(){
    float n;
    printf("\nInsira um Numero: ");
    scanf("%.2f",&n);
    printf("\n\nSoma da sequencia: %f .\n", calcS(n));
}
