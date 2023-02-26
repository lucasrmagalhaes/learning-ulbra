#include <stdio.h>
#include <conio.h>

void  mostra_vetor ( int vet[5], int pos) {  
	if (pos < 0 ) {
		return;
	} else {
		// printf("Posicao %i e valor %i\n", pos, vet[pos]);
		
		mostra_vetor(vet, pos-1);
	}
       
	printf("Posicao %i e valor %i\n", pos, vet[pos]);
}

int main() {	
	int vet[5]; 
	int i;
	
	printf("Digite os valores para o vetor:\n");
	
	for (i = 0; i < 5; i++) {
		printf("Digite um valor:");
		scanf("%i", &vet[i]); 
		fflush(stdin);
	}

	mostra_vetor(vet, i - 1);
	getch();
	
	return 0;
}