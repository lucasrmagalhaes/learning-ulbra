/*
 * Algoritmo e Programação II
 * Lucas Magalhães
*/


/*
 * Pesquisa. Durante o período da pandemia COVID-19 em uma universidade, 
 * foram coletados os seguintes dados de cada aluno,
 * aleatoriamente: código, nome, idade, gênero (F/M) e resultado do teste 
 * para COVID-19 (P/N). Onde P significa que o teste deu positivo
 * para COVID-19 e N se o teste deu negativo. Considerando estas informações, 
 * faça um programa em Linguagem C que disponibilize as opções de:
 * (a) cadastro de dados dos alunos pesquisados;
 * (b) edição de dados dos alunos (utilize o código do aluno para realizar a consulta para edição);
 * (c) o total de alunos pesquisados e total por gênero; idade média de todos e a idade média por gênero;
 * (d) quantidade e o percentual de alunos positivados; quantidade e o percentual de alunos positivados por gênero;
 */

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
	int codigo;
	char nome[60], genero, resultado;
	int idade;
};

main(){
	setlocale(LC_ALL, "Portuguese");
	char Menu;
	int i, cont, contAlunos,  contIdadeGeneroM,  contIdadeGeneroF;
	float totAlunos = 0, totIdade = 0, totIdadeGeneroM = 0, totIdadeGeneroF = 0;

	struct reg a[tam];
	
	for(i = 0; i < tam; i++)
		a[i].codigo = 0;
		
	do
	{
		system("cls");
		
		fflush(stdin);
		
		printf("\n	Menu Principal\n");
		printf("\n A - Cadastro");
		printf("\n B - Edicao");
		printf("\n C - Total de Alunos");
        printf("\n D - Idade Media de Todos");
        printf("\n E - Idade Media de Todos por Genero");
		printf("\n F - Sair");
		printf("\n\nOpcao: ");
		
		Menu = getche();
		Menu = toupper(Menu);
		
		switch (Menu) 
		{
			case 'A': 
				system("cls");
				printf("\nInserir");
				for(i=0; i<tam; i++)
					if(a[i].codigo == 0 && i < tam) {
				  		
				  		printf("\nDigite o seu nome: ");
				  		fflush(stdin);
				  		gets(a[i].nome); // Lê nome composto.
				  		strupr(a[i].nome); // Transformar em maiúsculo.
				  		
						printf("\nDigite a idade: ");
				  		fflush(stdin);
				  		scanf("%i", &a[i].idade);
				  		
				  		printf("\nDigite o seu genero M/F: ");
				  		fflush(stdin);
				  		scanf("%c", &a[i].genero);

                        printf("\nDigite o seu resultado P/N: ");
				  		fflush(stdin);
				  		scanf("%c", &a[i].resultado);
				  		
				  		a[i].codigo = 1;
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
					if(a[i].codigo == 1 && i < tam) {
						printf("\nNome: %s", a[i].nome);
						printf("\nIdade: %i", a[i].idade);
						printf("\nGenero: %c", a[i].genero);
                        printf("\nResultado: %c", a[i].resultado);
						printf("\n----------------------\n");
					};
				
				printf("\n Pressione uma tecla para voltar ao menu.");
				getch();
				break;
			
            case 'C': 
                system("cls");
                printf("\nTotal de Alunos\n");
            
                printf("\n Pressione uma tecla para voltar ao menu.");
                getch();
                break;
            
            case 'D': 
                system("cls");
                printf("\nMédia das Idades\n");
                
                cont = 0; 
                totIdade = 0;
                
                for(i = 0; i < tam; i++)
                    if(a[i].codigo == 1 && i < tam) {
                        totIdade = totIdade + a[i].idade;
                        cont++;
                    };
                
                if (totIdade != 0)
                    printf("\nMédia das idades = %.2f",(totIdade/cont));
                else {
                    printf("\nMédia das Idades = 0");	
                }
                printf("\n Pressione uma tecla para voltar ao menu.");
                getch();
                break;
            
            case 'E': 
                system("cls");
                printf("\nMédia das Idades por Genero\n");
    
            case 'F':
                printf("\n Saindo...");
                break;
            
            default:
                printf("\n Opção Inválida!");
                printf("\n Pressione uma tecla para voltar ao menu");
                getch();
		}
	}
	while (Menu!='F');
}