#include <stdio.h>
int inverter(int n)
{
   int inv=0;
   int i=1;
   while(i<=n)
   {
       inv*=10;
       inv+=(n%(i*10)-n%i)/i;
       i*=10;
   }
   return inv;
}
int main()
{
   int num, rev;
   printf("Numero a inverter:\n");
   scanf("%d",&num);
   rev = inverter(num);
   printf("o numero invertido é: %d", rev);
}
