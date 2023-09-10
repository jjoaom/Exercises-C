/*7. Escreva um programa para ler as coordenadas (X, Y) de uma quantidade
indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o
quadrante a que ele pertence. O programa será encerrado quando as duas
coordenadas digitadas forem 0 (nesse caso, o programa deverá encerrar e nada
deve ser escrito na tela). Ex.: Para os dados de entrada abaixo deve ser gerada
a seguinte saída: • 2 2: primeiro quadrante • -3 -2: quarto quadrante • -4 7:
primeiro quadrante • -8 -1: terceiro quadrante • -7 1: segundo quadrante*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  float x, y;
  do {
    printf("Informe o valor de x:\n");
    scanf("%f", &x);
    printf("Informe o valor de y:\n");
    scanf("%f", &y);

    if (x > 0 && y > 0) {
      printf("1º quadrante.");
    } else if (x < 0 && y > 0) {
      printf("2º quadrante.");
    } else if (x < 0 && y < 0) {
      printf("3º quadrante.");
    } else if (x > 0 && y < 0) {
      printf("4º quadrante.");
    }
  } while (x != 0 && y != 0);
  return 0;
}