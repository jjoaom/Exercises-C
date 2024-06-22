/*A importância de R$ 780.000,00 será dividida entre três ganhadores de um
concurso, sendo que: O primeiro ganhador receberá 46% do total. O segundo
receberá 32% do total. O terceiro receberá o restante. Calcule e imprima a
quantia recebida por cada um dos ganhadores.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float g1, g2, g3;
  g1 = 78000000 * 0.46;
  g2 = 78000000 * 0.32;
  g3 = 78000000 * 0.22;
  printf("O ganhador 1 vai ganhar R$%.2f\nO ganhador 2 vai ganhar R$%.2f\nO "
         "ganhador 3 vai ganhar R$%.2f ",
         g1, g2, g3);
  return 0;
}