#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y, z, res;
  printf("Digite 3 numeros:\n");
  scanf("%d %d %d", &x, &y, &z);
  res = x + y + z;
  printf("O resultado da soma de %d + %d + %d = %d", x, y, z, res);
  return 0;
}