/*Escreva um programa que receba um número inteiro do teclado e diga se ele é par ou
ímpar.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int x;
  printf("Escreva um número inteiro: \n");
  scanf("%d", &x);
  if (x % 2 == 0){
    printf("O número é par.");
  }else{
    printf("O número é impar.");
  }
  return 0;
}