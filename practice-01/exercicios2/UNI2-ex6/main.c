/*Escreva um programa que calcule as raízes da equação do 2º grau (ax² + bx +
 * c); os valores de a, b e c são fornecidos pelo usuário.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a, b, c, x1, x2, delta;
  printf("Sendo uma equação de segundo grau (ax² + bx + c), insira os valores "
         "de a, b e c: \n");
  scanf("%f %f %f", &a, &b, &c);
  //calcula delta
  delta = pow(b, 2) - 4 * a * c;
  //calcula as raizes
  x1 = (-b + (sqrt(delta))) / (2 * a);
  x2 = (-b - (sqrt(delta))) / (2 * a);

  printf("Delta é igual a %.2f\n", delta);
  printf("As raizes são x1 = %.2f e x2 = %.2f", x1, x2);
}