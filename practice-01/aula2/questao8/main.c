#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int r, a1, a10;
  int n = 10;
  printf("Digite a razão da PA:\n");
  scanf("%d", &r);
  printf("Digite o primeiro termo:\n");
  scanf("%d", &a1);
  a10 = a1 + (n - 1) * r;
  printf("O décimo termo da PA de razão %d sendo seu primeiro termo %d é %d.",
         r, a1, a10);
  return 0;
}

/*
an = a1 + (n - 1) . r
a10 = 26 + (10-1) . 5
a10 = 26 + 9 .5
a10 = 71
*/
