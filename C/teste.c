#include <stdio.h>
int func(int x){
  int vet[x];
  for ( int i ; i < x ; i++){
    printf("%d\n",i);
  }
}
int main(){
  int user;
  scanf("%d",&user);
  func(user);

}
