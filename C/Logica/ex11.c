#include <stdio.h>

int main()
{
    int n,
     d,
     primo;
    d = 2;
    primo = 1;
    printf("Forneca um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);

    if (n <= 1)
	primo = 0;

    while (primo == 1 && d <= n / 2) {
	if (n % d  == 0)
	    primo = 0;
	d = d + 1;
    }

    if (primo == 1)
	printf("%d é primo \n", n);
    else
	printf(" %d nao é primo \n", n);

    return 0;
}
