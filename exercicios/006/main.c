#include <stdio.h>

int main(void) {
  double num;
  printf("Digite um número\n");
  scanf("%lf", &num);
  printf("%E", num);
  return 0;
}