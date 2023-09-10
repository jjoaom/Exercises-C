/*3. Escreva um algoritmo que leia n valores, um de cada vez, e conte quantos
destes valores são pares, escrevendo esta informação. A leitura deve finalizar
quando o valor lido for igual a 0. Utilize a estrutura e repetição do-while.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  // variavel n para armazenar o numero inserido pelo user
  int n, i = 0;
  // loop do-while para pedir o numero e armazenar em n. Se for menor que 0 ele
  // imprime numero invalido e repete o bloco
  do {
    // pede o numero para o user
    printf("Digite um número:\n");
    scanf("%d", &n);
    // se n for menor que 0, imprima numero invalido
    if (n < 0) {
      printf("Numero inválido\n");
      // se o numero for par, faz a contagem incremento de i, para contar
      // quantos valores pares tem
    } else if (n % 2 == 0) {
      i++;
    }
    // o bloco é repetido enquanto n for diferente de zero
  } while (n != 0);
  // imprime o resultado
  printf("Números pares digitados: %d", i);

  return 0;
}