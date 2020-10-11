#include <stdio.h>
#include <math.h>

main () {
	int a, r;
	printf("\nDigite um inteiro: ");
	scanf("%i",&a);
	
	if(a > 0) {
		printf("\nMaior do que Zero");
		printf("\nO valor digitado foi: %i", a);
	} else {
		printf("\nNao e maior do que zero.");
	}
}