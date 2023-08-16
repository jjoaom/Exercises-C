#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char a;
  int b;
  float c;
  printf("Digite um caractere um int e um float:\n");
  scanf("%c %d %f", &a, &b, &c);
  printf("\t%c\n\t%d\n\t%f", a, b, c);
  return 0;
}