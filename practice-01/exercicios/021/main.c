#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double km, m;
  printf("Informe a velocidade em km:\n");
  scanf("%lf", &km);

  m = km / 36;
  printf("A velocidade em metros equivale a %lf metros por segundo", m);
  return 0;
}