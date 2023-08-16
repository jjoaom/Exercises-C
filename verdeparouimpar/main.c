// Crie um programa que recebe um número do usuário e imprime par ou impar.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num = 4;
  if (num % 2 == 0) {
    printf("par");
  } else {
    printf("impar");
  }

  return 0;
}