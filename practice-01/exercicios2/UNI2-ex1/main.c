/*
  Escreva um programa que resolva o seguinte problema: uma cópia “xerox” custa
R$ 0,25 por folha, mas acima de 100 folhas esse valor cai para R$ 0,20 por
unidade. Dado o total de cópias, informe o valor a ser pago.
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int qnt;
  float xerox, total;

  printf("Insira a quantidade de xerox que você deseja: ");
  scanf("%d", &qnt);
  if (qnt >= 100) {
    xerox = 0.20;
  }else{
    xerox = 0.25;
  }
  total = xerox * qnt;
  printf("Você desejou por %d cópias e o total foi R$%.2f", qnt, total);

  return 0;
}