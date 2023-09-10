/*5. Escreva um programa que seja capaz de ler do teclado 31 valores reais
correspondentes ao índice pluviométrico diário da região da Pampulha durante o
mês de janeiro. O programa deve determinar e imprimir o índice pluviométrico
médio, o índice pluviométrico máximo e o dia que ele ocorreu.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  float n;

  for (int i = 1; i <= 31; i++) {
    printf("insira o indice pluviometrico do dia %d:");
    scanf("%f", &n);
  }

  return 0;
}