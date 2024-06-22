#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float base, alt, area, peri, diag;
  printf("Digite o valor da base do retangulo a ser "
         "calculado: \n");
  scanf("%f", &base);
  printf("Digite o valor da altura do retangulo a ser calculado: \n");
  scanf("%f", &alt);
  peri = 2 * (base + alt);
  area = base * alt;
  diag = sqrt(base * base + alt * alt);
  printf("O perimetro, area e diagonal desse retangulo, respectivamente, é: "
         "%3f %3f %3f",
         peri, area, diag);
  return 0;
}