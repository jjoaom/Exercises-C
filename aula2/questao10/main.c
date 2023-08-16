#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double a, b, temp;
  printf("Digite o valor do número a: \n");
  scanf("%lf", &a);
  printf("Digite o valor do número b: \n");
  scanf("%lf", &b);
  temp = a;
  a = b;
  b = temp;
  printf("Com os valores invertidos o a agora tem o valor de b: %lf e b tem o "
         "valor de a: %lf",
         a, b);
  return 0;
}