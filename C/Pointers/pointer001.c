#include <stdio.h>
int pointer(int *a){
  *a = 5;

}

int main (){
  int a = 0;
  printf("%p\n",&a);
  printf("%d\n",a);
  pointer(&a);
  printf("%d\n",a);
  printf("%p\n",&a);
}
