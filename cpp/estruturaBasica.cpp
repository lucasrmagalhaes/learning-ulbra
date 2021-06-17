#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define pi 3.14

main(){
	int num1, num2=2;
	char letra, letra1='a';
	float numSalario, numTotal=1000.5;
	char nome[10], sobrenome[10]="Zeve";
	
	fflush(stdin); // Limpar o banco de dados.
	printf("\nDigite um inteiro: ");
	scanf("%i",&num1);
	printf("\nInteiro = %i",num1);
	
	/* 
	 * num1 = num1 + 1;
	 * num1 += 1;
	 */
	
	/*
	 * numSalario = (float)num1/num2;
	 * printf("\nInteiro = %.2f",numSalario);
	 */
	 
	fflush(stdin);
	printf("\nDigite um caractere: ");
	scanf("%c",&letra);
	printf("Caractere = %c", letra);
	
	fflush(stdin);
	printf("\nDigite um real: ");
	scanf("%f",&numSalario);
	printf("Real = %f",numSalario);
	
	fflush(stdin);
	printf("\nDigite um string: ");
	// scanf("%s",&nome);
	gets(nome);
	printf("String = %s",nome);
}