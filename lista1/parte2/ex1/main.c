/*1. Implemente um algoritmo que receba a altura e peso de uma pessoa e calcule
e o seu Índice de Massa Corporal (IMC).*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float altura, peso, imc;
  printf("Insira a sua altura em metros:\n");
  scanf("%f", &altura);
  printf("Insira seu peso em kilos:");
  scanf("%f", &peso);
  imc = peso / (altura * altura);
  printf("O seu Indice de Massa Corporal é %.3f", imc);
  return 0;
}