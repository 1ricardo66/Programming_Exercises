//eof

#include <stdio.h>
#include <stdlib.h>
#include <Type.h>

int main (void){
    FILE *pont_arq;
    char palavra [20];
    
    pont_arq = fopen("teste.txt","r");
    if (pont_arq == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    printf("Escreva uma palavra para testar gravação de arquivo");
    scanf("%s",palavra);

    fprintf(pont_arq, "%s\n",palavra);

    fclose(pont_arq);

    printf("Dados gravados com sucesso");


}