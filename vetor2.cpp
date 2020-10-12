#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tam 8

main () {
    int i, total=0;
    int v[tam];

    for(i=0;i<tam;i++) {
        printf("\nv[%i]: ",i+1);
        scanf("%i",&v[i]); // ler
    }

printf("\n\n");

    for(i=0;i<tam;i++) {
        printf("%i",v[i]); // mostrar
    }

    for(i=0;i<tam;i++) {
        total = total + v[i];
        printf("\nTotal da soma dos valores = %i",total);
    }
}