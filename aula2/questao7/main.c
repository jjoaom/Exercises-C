#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int c, f;
  printf("Insira a temperatura em Celsius: \n");
  scanf("%d", &c);
  f = 180 * (c + 32) / 100;
  printf("A temperatura Celsius %d em Fahrenheit é %d", c, f);
  return 0;
}