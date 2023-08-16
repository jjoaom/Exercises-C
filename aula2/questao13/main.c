//Ler o valor do salário mínimo e o valor do salário de uma pessoa, calcular e mostrar quantos salários mínimos essa pessoa ganha.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  float salario, x, salmin;
  printf("Insira o valor do salario minimo: \n R$");
  scanf("%f", &salmin);
  printf("Insira quanto você ganha: \n R$");
  scanf("%f", &salario);
  x = (salario / salmin);
  printf("Você ganha R$ %1f salários minimos.", x);
  return 0;
}