#include <stdio.h>
#include <math.h>

main () {
	int a, r;
	printf("\nDigite um inteiro: ");
	scanf("%i",&a);
	
	switch(a){
		case 1: 
			printf("\nUM");
			break;
		case 2: 
			printf("\nDOIS");
			break;
		case 3: 
			printf("\nTRÊS");
			break;
		case 4: 
			printf("\nQUATRO");
			break;
		case 5: 
			printf("\nCINCO");
			break;
		default:
			printf("\nNumero fora do intervalo.");
	}
}