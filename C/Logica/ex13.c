#include <stdio.h>
int fat (int n) {
if ((n==1) || (n==0)) return 1;
   else
      return fat(n-1)*n;
}
int main () {
int n,result;
printf("Informe o número:\n");
scanf("%d",&n);
printf("O fatorial de %d é %d \n",n,fat (n));
}
