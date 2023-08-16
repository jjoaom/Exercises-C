#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y, res;
  printf("Escreva  o numero da variavel: \n");
  scanf("%d", &x);
  printf("Escreva  o numero do expoente: \n");
  scanf("%d", &y);
  res = pow(x, y);
  printf("A potencia de %d elevada a %d eh eh: %d", x, y, res);

  return 0;
}
