#include <stdio.h>

int func (int a, int b){
  return (a+b)/2;
}
int main (){
  int a,b;
  scanf("%d %d",&a , &b);
  printf("%d",func(a,b));
}
