/*2. Implemente um algoritmo que solicita o valor de 3 notas (n1, n2 e n3) e
depois mostra: o menor valor, o maior valor, a soma, a média e o produto das
notas.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n1, n2, n3, maior, menor, soma, media, produto;
  // pede os 3 valores
  printf("Insira 3 valores: \n");
  scanf("%d %d %d", &n1, &n2, &n3);
  // calculo de soma, media e produto a seguir
  soma = n1 + n2 + n3;
  media = soma / 3;
  produto = n1 * n2 * n3;
  // inicia o codigo como maior e menor numero
  maior = menor = n1;
  // if para calcular o menor e maior valor
  if (n2 > maior) {
    maior = n2;
  } else if (n2 < menor) {
    menor = n2;
  }
  if (n3 > maior) {
    maior = n3;
  } else if (n3 < menor) {
    menor = n3;
  }
  // print dos resultados
  printf("O maior número é %d e o menor é %d\n", maior, menor);
  printf("A soma das 3 notas é igual a %d\n", soma);
  printf("A media das 3 notas é igual a %d\n", media);
  printf("O produto das 3 notas é igual a %d\n", produto);
  return 0;
}