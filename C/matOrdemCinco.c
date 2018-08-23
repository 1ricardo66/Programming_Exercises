/*Criar um programa em linguagem C que armazene dados inteiros em uma matriz de ordem cinco e mostre: toda a matriz e uma outra formada pelos números que se encontram em posições cuja linha mais coluna formam um número par*/
#include <stdio.h>
void main (){
  int mat[5][5],i,j,matB[5][5];

  for (i = 0 ; i < 5 ; i++){
    for (j = 0 ; j < 5 ; j++){
      mat[i][j] = j;
    }
  }

  for (i = 0 ; i < 5 ; i++){
    for (j = 0 ; j < 5 ; j++){
      matB[i][j] = mat[i][j];
    }
  }
  printf("1° Matriz\n");
  for (i = 0 ; i < 5 ; i++){
    for (j = 0 ; j < 5 ; j++){
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }

  printf("2° Matriz\n");

  for (i = 0 ; i < 5 ; i++){
    for (j = 0 ; j < 5 ; j++){
      if((i+j)%2 == 0){
        printf("%d ",matB[i][j]);
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
}
