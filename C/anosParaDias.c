#include <stdio.h>
#include <stdlib.h>

int anosParaDias(int anos){
  anos = anos*365;
  return anos;
}
int main (){
  int anos,total;
  printf("Quantidade de anos: ");
  scanf("%d",&anos);
  total = anosParaDias(anos);
  printf("%d\n",total);
  return 0;
}
