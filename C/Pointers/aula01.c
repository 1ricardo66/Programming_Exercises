// #include <stdio.h>
// int main (){
//   int i,j,k;
//   printf("Endereço de i = %p\n",&i);
//   printf("Endereço de i = %p\n",&k);
//   printf("Endereço de i = %p\n",&j);
//   return 0;
// }

#include <stdio.h>
float func(float *n1, float *n2, float *n3,float *n4, float *media){
  *media = (*n1+*n2+*n3+*n4)/4;
}
void ordena(float *n1, float *n2, float *n3,float *n4){
  int pass =0;
  float vet[4] = {*n1,*n2,*n3,*n4},aux;
do {
  pass =0;
  for (int i=0 ; i<3 ; i++){
    if (vet[i] > vet[i+1]){
      aux = vet[i+1];
      vet[i+1] = vet[i];
      vet[i] = aux;
      pass++;
    }
  }
} while(pass!=0);
for (int i =0 ; i <4 ; i++){
  printf("%.2f\n",vet[i]);
}
}

int main (){
  float n1 = 10 , n2 = 5.3, n3=5.7,n4=8.3,media;
  func(&n1 , &n2 , &n3, &n4, &media);
  ordena(&n1 , &n2 , &n3, &n4);
  printf("Media: %.2f",media);

  return 0;
}
