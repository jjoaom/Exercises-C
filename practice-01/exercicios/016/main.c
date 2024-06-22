#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y, z;
  printf("Digite um numero:\n");
  scanf("%d", &x);
  y = x - 1;
  z = x + 1;
  printf("O número %d tem o antecessor %d e o sucessor %d", x, y, z);
  return 0;
}