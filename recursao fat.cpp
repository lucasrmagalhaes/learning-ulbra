#include <stdio.h>
#include <conio.h>

int  fatorial(int nro) 
  {  
       int fat=1;
       if ( nro == 0 )  return 1;
       else fat = nro * fatorial (nro - 1);
       printf("%i\n",fat);
       return fat;
   }



int main(){
	
	int nro, f;
	printf("Digite o valor:");
	scanf("%i", &nro); fflush(stdin);
	f = fatorial(nro);
	printf("Valor do fatorial:%i", f);
	getch();
	return 0;
}
