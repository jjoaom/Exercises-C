#include <stdio.h>

int main(void) {
  int x, y, z;
  printf("Digite o primeiro valor: \n");
  scanf("%d", &x);
  printf("Digite o segundo valor: \n");
  scanf("%d", &y);
  printf("Digite o terceiro valor: \n");
  scanf("%d", &z);
  printf("Os números digitados são:\n");
  printf("%d", x);
  printf("%d", y);
  printf("%d \n", z);
  printf("Os números inversos são:\n");
  printf("%d", z);
  printf("%d", y);
  printf("%d", x);
  return 0;
}