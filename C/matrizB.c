#include <stdio.h>

int main(){
 int mat[5][5],i,j;
 int linha4=0 , coluna2=0 , diagonalP=0 ,todosE=0;

 for(i = 0 ; i < 5 ; i++){
   for ( j = 0 ; j < 5 ; j++){
     mat[i][j] = j;
   }
 }


 for(i = 0; i <5 ; i++){
   for (j = 0 ; j < 5 ; j++){
     if(i == 3){
       linha4+=mat[i][j];
     }if(j == 1){
       coluna2+=mat[i][j];
     }if(i==j){
       diagonalP+=mat[i][j];
     }
     todosE+=mat[i][j];
   }
 }
 printf("\n#####################\n      Matriz\n");

 for(i = 0; i <5 ; i++){
   for (j = 0 ; j < 5 ; j++){
     printf("  %d ",mat[i][j]);
   }
   printf("\n");
 }
 printf("\n#####################\n      Soma\n");
 printf("Linha4 : %d\nColuna2 : %d\nDiagonalP: %d\nTodos os elementos: %d",linha4,coluna2,diagonalP,todosE);

}
