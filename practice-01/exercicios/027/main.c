/*Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char maiuscula, minuscula;
  int diferenca;
  printf("Informe uma letra minuscula: \n");
  scanf("%c", &minuscula);
  diferenca = 'A' - 'a';
  maiuscula = minuscula + diferenca;
  printf("Convertida para maiuscula: %c", maiuscula);
  return 0;
}