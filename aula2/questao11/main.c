//Ler o numerador e denominador de uma fração e transformá-la em um número decimal.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  double numerador, denominador, decimal;
  printf("Digite o valor do numerador:\n");
  scanf("%lf",&numerador);
  printf("Digite o valor do denominador:\n");
  scanf("%lf", &denominador);
  decimal = numerador / denominador;
  printf("Com o numerador %lf e o denominador %lf temos o decimal: %lf", numerador, denominador, decimal);
  return 0;
}