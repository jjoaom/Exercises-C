/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso,
os dois números forem iguais, imprima a mensagem “Números iguais”.
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y;
  printf("Insira dois números: \n");
  scanf("%d %d", &x, &y);
  if (x > y) {
    printf("O número %d é o maior.\n", x);
  }
  if (x < y) {
    printf("O número %d é o maior.\n", y);
  }
  if (x == y) {
    printf("Os números são iguais.");
  }
  return 0;
}