#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592653

int main(void) {
  float raio, peri, area;
  printf("Digite o valor do raio do circulo: \n");
  scanf("%f", &raio);
  peri = 2 * pi * raio;
  area = pi * pow(raio, 2);
  printf("O perimetro e a area do circulo de raio %f é: %f %f", raio, peri, area);
  return 0;
}