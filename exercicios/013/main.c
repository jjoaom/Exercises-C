#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char c;
  printf("Digite um caractere:\n");
  scanf("%c", &c);
  printf("\"%c\"", c);
  return 0;
}