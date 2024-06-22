#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(void) {
  double g, r;
  printf("Informe um angulo em graus:\n");
  scanf("%lf", &g);
  r = g * pi / 180;
  printf("O angulo em radianos equivale a %lf", r);
  return 0;
}