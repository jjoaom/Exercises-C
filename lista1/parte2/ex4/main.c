/*4. Escreva um programa em C para que converta uma quantidade específica de
dias em anos (considerar apenas 365 dias), semanas e dias. Ex.: 500 dias = 1
ano, 133 semanas e 2 dias
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int dia, ano, semana, qntdia;
  printf("Insira a quantidade de dias.\n");
  scanf("%d", &qntdia);
  ano = qntdia / 365;
  semana = (qntdia % 365) / 7;
  dia = (qntdia % 365) % semana;
  printf("%d Ano, %d semanas e %d dias", ano, semana, dia);
  return 0;
}