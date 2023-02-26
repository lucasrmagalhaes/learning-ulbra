#include <stdio.h>
#include <conio.h>

  int  potencia ( int b, int exp) 
  {  
       int p=1;
       if ( exp == 0 )  return 1;
       else {
       			printf("base %i e expo %i\n", b, exp); //empilha
	   			p = b *  potencia (b, exp - 1);
	   		}
	   printf("valor potencia: %i\n", p); // desempilha
       return p;
   }


int main(){
	
	int b; int e, pot;
	printf("Digite o valor da base:");
	scanf("%i", &b); fflush(stdin);
	printf("Digite o valor do expoente:");
	scanf("%i", &e); fflush(stdin);
	pot = potencia(b,e);
	printf("Valor da potencia:%i", pot);
	getch();
	return 0;
}
