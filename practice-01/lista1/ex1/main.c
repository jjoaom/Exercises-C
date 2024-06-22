/*1. Implemente um algoritmo que solicita para o usuário um número inteiro n (digitado) e
posteriormente o sistema mostra o sucessor de n (ex. se o usuário digitou 15, o sistema deverá
imprimir 16).*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //solicita numero e entrada para digitar
  int n,res;
  printf("Digite um número inteiro: \n");
  scanf("%d", &n);
  //calcula sucessor
  res = n + 1;
  printf("O sucessor do número %d é %d.", n, res);
  return 0;
}