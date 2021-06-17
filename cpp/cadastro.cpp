#include<stdio.h>
#include<windows.h>
#include<ctype.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define tam 3

struct reg {
	int ativo;
	char nome[60];
	int idade;
	char cel[11];
};

main(){
	setlocale(LC_ALL, "Portuguese");
	char Menu;
	int i, cont;
	float tot = 0;
	struct reg a[tam];
	
	for(i = 0; i < tam; i++)
		a[i].ativo = 0;
		
	do
	{
		system("cls");
		
		fflush(stdin);
		
		printf("\n	Menu Principal\n");
		printf("\n A - Inserir");
		printf("\n B - Visualizar");
		printf("\n C - Média das Idades");
		printf("\n D - Sair");
		printf("\n\nOpcao: ");
		
		Menu = getche();
		Menu = toupper(Menu);
		
		switch (Menu) 
		{
			case 'A': 
				system("cls");
				printf("\nInserir");
				for(i=0; i<tam; i++)
					if(a[i].ativo==0 && i<tam) {
				  		
				  		printf("\nDigite o seu nome: ");
				  		fflush(stdin);
				  		gets(a[i].nome); // Lê nome composto.
				  		strupr(a[i].nome); // Transformar em maiúsculo.
				  		
						printf("\nDigite a idade: ");
				  		fflush(stdin);
				  		scanf("%i", &a[i].idade);
				  		
				  		printf("\nDigite o seu celular: ");
				  		fflush(stdin);
				  		gets(a[i].cel);
				  		
				  		a[i].ativo = 1;
				  		break; // Sair do cadastro.
					}
					
					if (i == 3) {
						printf("\nVetor cheio!");
					};
					
					printf("\n Pressione uma tecla para voltar ao menu.");
					getch();
					break;	
			
			case 'B':
				system("cls");
				printf("\nVisualizar");
				
				for(i = 0; i < tam; i++)
					if(a[i].ativo == 1 && i < tam) {
						printf("\nNome: %s", a[i].nome);
						printf("\nIdade: %i", a[i].idade);
						printf("\nCelular: %s", a[i].cel);
						printf("\n----------------------\n");
					};
				
				printf("\n Pressione uma tecla para voltar ao menu.");
				getch();
				break;
			
			case 'C': 
				system("cls");
				printf("\nMédia das Idades\n");
				
				cont = 0; 
				tot = 0;
				
				for(i = 0; i < tam; i++)
					if(a[i].ativo == 1 && i < tam) {
						tot = tot + a[i].idade;
						cont++;
					};
				
				if (tot != 0)
					printf("\nMédia das idades = %.2f",(tot/cont));
				else {
					printf("\nMédia = 0");	
				}
				printf("\n Pressione uma tecla para voltar ao menu.");
				getch();
				break;
							
			case 'D':
				printf("\n Saindo...");
				// sleep(3);
				break;
				
			default:
				printf("\n Opção Inválida!");
				printf("\n Pressione uma tecla para voltar ao menu");
				getch();
		}
	}
	while (Menu!='D');
}