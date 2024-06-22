#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char a, b, c;
  printf("Digite um caractere:\n");
  scanf("%c %c %c", &a, &b, &c);
  printf("%c\n%c\n%c", a, b, c);
  return 0;
}