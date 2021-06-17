#include <stdio.h>
#include <math.h>

main () {
	int a, r;
	printf("\nDigite um inteiro: ");
	scanf("%i",&a);
	
	if(a > 0) {
		printf("\nValor eh positivo.");
	} else if (a < 0)
		printf("\nValor eh negativo.");
	else 
		printf("\nValor zero.");
}