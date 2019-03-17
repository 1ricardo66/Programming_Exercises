#include <stdio.h>

float preco_final(int codigo,float preco){
    if(codigo==1)
        return (preco*0.9);
    else if(codigo==2)
        return (preco*0.95);
    else if(codigo==3){
        return(preco/2);
    }
    else if(codigo==4){
        return ((preco*1.1)/3);
    }
    else{
        printf("\nCodigo invalido!!\n");
        return -1;
    }
}
int main(){
    float preco=64;
    int cod;
    printf("Total: R$%.2f reais. Escolha a forma de pagamento: \n",preco);
    printf("[1]-A vista em dinheiro/cheque.\n");
    printf("[2]-A vista no cartao de credito.\n");
    printf("[3]-Parcelado em 2x.\n");
    printf("[4]-Parcelado em 3x.\n\n");
    scanf("%d",&cod);
    if(cod==3)
        printf("\nTOTAL: 2 vezes de R$%.2f cada.\n",preco_final(cod,preco));
    else if(cod==4)
        printf("\nTOTAL 3 vezes de R$%.2f cada.\n",preco_final(cod,preco));
    else if(preco_final(cod,preco)==-1);
    else
        printf("\nTOTAL: R$%.2f reais.\n\n",preco_final(cod,preco));
}
