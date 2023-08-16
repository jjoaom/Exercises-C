#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double dolar, real, conversao;
  printf("Informe a cotacao do dolar hoje:\n");
  scanf("%lf", &dolar);
  printf("Informe o valor em real que deseja converter:\n");
  scanf("%lf", &real);
  conversao = real * dolar;
  printf("O valor convertido é equivalente a %.2lf dolares", conversao);
  return 0;
}