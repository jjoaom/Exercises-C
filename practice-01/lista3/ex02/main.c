/*. Escreva um programa para imprimir os números ímpares entre 3 até 999.
Utilize a estrutura de repetição while.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  // começa com i valendo 3
  int i = 3;
  // enquanto i for igual ou menor que mil faça
  while (i <= 1000) {
    // apenas imprime se o i for impar
    if (i % 2 == 1) {
      printf("%d\n", i);
    }
    // realiza o incremento
    i++;
  }
  return 0;
}