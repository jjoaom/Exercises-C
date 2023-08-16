/*Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O
volume de um cilindro circular é calculado por meio da seguinte fórmula: 𝑣 = 𝜋 ⋅ 𝑟𝑎𝑖𝑜 2 ⋅
𝑎𝑙𝑡𝑢𝑟𝑎, em que π = 3.141592.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592

int main(void) {
  float a,r,v;
  printf("Informe a altura e raio de um cilindro circular: \n");
  scanf("%f\n%f", &a, &r);
  v = pi * pow(r,2) * a;
  printf("O volume do cilindro circular equivale a %f", v);
  return 0;
}