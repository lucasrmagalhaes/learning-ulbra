#include <stdio.h>
#include <math.h>

main () {
	char a;
	printf("\nDigite um caractere: ");
	scanf("%c",&a);
	
	switch(a){
		case 'a': 
		case 'A': 
		case 'e':
		case 'E':
		case 'i': 
		case 'I':
		case 'o':
		case 'O': 
		case 'u':
		case 'U':
			printf("\n%c Eh Vogal",a);
			break;
		default:
			printf("\nConsoante");
	}
}