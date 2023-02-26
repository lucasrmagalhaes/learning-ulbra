#include <stdio.h>
#include <stdlib.h>

void imprimir(int n) {
    if (n == 0) {
        printf("%d ", n);
    } else {
        printf("%d ", n);
        imprimir(n - 1);
    }
}

int main () {
    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    imprimir(n);

    return 0;
}