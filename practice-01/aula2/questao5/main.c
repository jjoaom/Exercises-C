#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592653

int main(void) {
  float lado, peri, area, diag;
  printf("Digite o valor do lado do quadrado: \n");
  scanf("%f", &lado);
  peri = 4 * lado;
  area = pow(lado, 2);
  diag = lado * sqrt(2);
  printf("O perimetro, area e diagonal do quadrado de lado %f é: %f %f %f",
         lado, peri, area, diag);
  return 0;
}