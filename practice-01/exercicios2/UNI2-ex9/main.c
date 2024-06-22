/*Escreva um programa que receba um número e diga se ele está no intervalo entre
100 e 200*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x;
  printf("Digite um número\n");
  scanf("%d", &x);
  if (x >= 100 && x <= 200) {
    printf("Esse número está no intervalo entre 100 e 200");
  } else {
    printf("Não está no intervalo entre 100 e 200");
  }
  return 0;
}