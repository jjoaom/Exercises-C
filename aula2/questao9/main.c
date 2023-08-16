#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int r, a1, a5;
  printf("Digite a razão da PG: \n");
  scanf("%d", &r);
  printf("Digite o primeiro termo da PG: \n");
  scanf("%d", &a1);
  a5 = a1 * pow(r,4);
  printf("O quinto termo da PG de razão %d sendo o primeiro termo %d é: %d", r, a1, a5);
  return 0;
}


//a5 = a1 * r^(5-1)