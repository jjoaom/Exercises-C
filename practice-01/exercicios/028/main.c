/*Faça um programa para ler um número inteiro positivo de três dígitos. Em
seguida, calcule e mostre o número formado pelos dígitos invertidos do número
lido. Exemplo: Número lido = 123 Número gerado = 321. */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n1, n2, n3;
  printf("Insira 3 números inteiros positivos para formar um numero só:");
  scanf("%d %d %d", &n1, &n2, &n3);
  printf("O número invertido é %d%d%d", n3, n2, n1);
  return 0;
}