### Estrutura de Dados

**Recursividade**

Revisão de Subrotinas
- Dividir um problema em partes menores;
- Unidades autônomas de código;
- Possuem uma assinatura: identificador, tipo de retorno, tipo e quantidade de parâmetros;
- Pode ser executado várias vezes quando chamado pelo seu nome;
- Após sua chamada, o controle de execução passa para a subrotina, ao encerrar, retorno para o próximo comando após sua chamada; e
- Fluxo de execução.

**Chamada**
- Procedimentos, não retornam valor
- Funções, retornam valor, podem ser utilizadas como se fossem os valores que retornam

```c
void mostra_vetor(int vet[], int i) {
  ...
}

int soma_vetor(int vet[], int i) {
  ...
}
```

int vet[10]; int i = 10;
mostra_vetor(vet, i);
soma = soma_vetor(vet, i);

**Protótipo de Função**

```c
#include <stdio.h>
#include<conio.h>
int soma(int v1, int v2);

int soma(int v1, int v2) {
  int s;
  s = v1 + v2;
  return s;
};

int main() {]
  int valor1, valor2;
  printf("Digite um valor:");
  scanf("%i", &valor1); fflush(stdin);

  printf("Digite um valor:");
  scanf("%ï", &valor2); fflush(stdin);

  printf("Soma=%i\n", soma(valor1, valor2));
  getch();
  return 0;
};
```

**Recursividade**
- Uma função recursiva consiste em uma função que chama ela mesma!

```c
int main()
{
  int valor;
  printf("Digite um valor:");
  scanf("%i", &valor); fflush(stdin);
  printf("Fatorial de %i e %i!\n"m valor, fatorial(valor));
  getch();
  return 0;
}
```

Fatorial: 5! = 5 x 4 x 3 x 2 x 1

**Características**
- Condição de recursão e condição de parada.

```c
int fatorial(int nro)
{
  int fat = 1;
  if (nro == 0) return 1;
  else fat = nro * fatorial(nro - 1);
  printf("%i\n", fat);
  return fat;
}
```

- Cada chamada recursiva de uma função gera uma nova execução da função (réplica);
- A cada nova chamada recursiva, o contexto atual é empilhado, e, ao final da recursão, são desempilhados, gerando o resultado; e
- Ou seja, o resultado vai sendo formado quando a recursão para e os valores começam a retornar.
