#include <stdio.h>

int main (){
  int mat[2][3] = {{1,2,3},{4,5,6}},i,j,soma=0;

  for (i = 0 ; i < 2 ; i++){
    for (j = 0 ; j < 3 ; j++){
        soma+=mat[i][j];
    }
  }
  printf("Total: %d",soma);
}
