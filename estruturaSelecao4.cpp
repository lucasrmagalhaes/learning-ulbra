#include <stdio.h>
#include <math.h>

main () {
	char a;
	printf("\nDigite um caractere: ");
	scanf("%c",&a);
	
	switch(a){
		case 'a': 
		case 'A': 
			printf("\n%c eh Vogal 1",a);
			break;
		case 'e':
		case 'E':
			printf("\n%c eh Vogal 2",a);
			break;
		case 'i': 
		case 'I':
			printf("\n%c eh Vogal 3",a);
			break;
		case 'o':
		case 'O': 
			printf("\n%c eh Vogal 4",a);
			break;
		case 'u':
		case 'U':
			printf("\n%c eh Vogal 5",a);
			break;
		default:
			printf("\nConsoante");
	}
}