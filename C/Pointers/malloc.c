#include <stdio.h>
#include <stdlib.h>

int main (){
  int *p = malloc(5 * sizeof(int));

  for (int i = 0 ; i < 5 ; i++){
    p[i] = i;
  }

  for (int i = 0 ; i < 5 ; i++){
    printf("%d",p[i]);
  }
  free(p);
}
