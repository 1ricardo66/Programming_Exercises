#include <stdio.h>
#include <stdlib.h>

int main (){
  int *x;
  x = malloc (10 * sizeof *x);
  free(x);

}
