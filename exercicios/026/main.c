/*. Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: ℎ =
√𝑎2 + 𝑏2. Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a,b,h;
  printf("Informe os dois catetos de um triangulo: \n");
  scanf("%f\n%f", &a, &b);
  h = sqrt(pow(a,2) + pow(b,2));
  printf("A hipotenusa equivale a %f", h);
  return 0;
}