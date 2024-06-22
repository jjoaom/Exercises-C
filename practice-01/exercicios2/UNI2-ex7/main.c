/*Escreva um programa que recebe os valores de distância total percorrida e
total de combustível gasto e calcula o consumo médio de um automóvel.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  const float valor = 5.50;
  float d, t, c, dg;
  printf("Digite a distancia total percorrida em km\n");
  scanf("%f", &d);
  printf("Digite o total gasto de combustível em litros: \n");
  scanf("%f", &t);
  // calculo de consumo medio do automovel
  c = d / t;
  dg = t * valor;
  printf("Você gastou R$ %.2f em gasolina\n", dg);
  printf("O consumo médio do automovel foi de: %.2f", c);
  return 0;
}