#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float x, y, z, res;
  printf("Digite 3 numeros:\n");
  scanf("%f %f %f", &x, &y, &z);
  res = x + y + z / 3;
  printf("Media aritmetica: %f + %f + %f = %f", x, y, z, res);
  return 0;
}