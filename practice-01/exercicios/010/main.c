#include <stdio.h>

int main(void) {
  int dia, mes, ano;
  printf("Digite em sequencia o dia, mes e ano: \n");
  scanf("%d %d %d", &dia, &mes, &ano);
  printf("%d/%d/%d", dia, mes, ano);
  return 0;
}