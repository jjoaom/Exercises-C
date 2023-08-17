/*Escreva um programa que calcule a velocidade de queda de um corpo em função do
tempo, partindo da velocidade zero. Dica: Use equações de aceleração da Física.

v – Velocidade de queda (m/s)

g – gravidade (m/s²)

t - tempo de queda (s)
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define g 9.8

int main(void) {
  float t,v;
  printf("Insira o tempo percorrido: \n");
  scanf("%f", &t);
  v = g * t;
  printf("A velocidade é igual a %.1f", v);
  return 0;
}