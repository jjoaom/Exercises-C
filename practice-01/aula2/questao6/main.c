#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  float a,b,c,y;
  printf("Digite o valor de a: \n");
  scanf("%f", &a);
  printf("Digite o valor de b: \n");
  scanf("%f", &b);
  printf("Digite o valor de c: \n");
  scanf("%f", &c);
  y = a + b * c + a + 2 * (a-b) + log2(64);
  printf("Valor de a: %f\nValor de b: %f\nValor de c: %f\nResultado é: %f",a,b,c,y);
  return 0;
}