#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mostrarMM(int vetor[],int tamvetoror){
    int maior,menor;
    maior=vetor[0];
    menor=vetor[0];
    for(int i=1;i<tamvetoror;i++){
        if(vetor[i]<menor)
            menor=vetor[i];
        if(vetor[i]>maior)
            mahior=vetor[i];
    }
    printf("\n\nMaior valor é [%d] e o menor é [%d].\n\n",maior,menor);
}
int main(){
    int vetoror[20];
    srand(time(NULL));
    printf("vetor:  ");
    for(int i=0;i<20;i++){
        vetoror[i]=rand()%101;
        printf("[%d] ",vetoror[i]);
    }
    mostrarMM(vetoror,20);
}
