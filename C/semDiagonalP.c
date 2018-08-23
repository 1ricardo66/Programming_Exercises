/*Criar um programa em Linguagem C que leia os elementos de uma matriz 1x10 e escreva todos os elementos, exceto os elementos da diagonal principal*/
#include <stdio.h>
void main (){
  int mat[10][10],i,j;

  for (i=0 ; i <10 ; i++){
    for (j=0 ; j <10 ; j++){
      if (i==j){
        mat[i][j] = 0;

      }else{
        mat[i][j] = 1;
      }
    }
  }

  for (i=0 ; i < 10 ; i++){
    for (j=0 ; j<10 ; j++){
      if (i!=j){
        printf("%d ",mat[i][j]);
      }
      if(i==j){
        printf(" ");
      }
    }
    printf("\n");
  }

}
