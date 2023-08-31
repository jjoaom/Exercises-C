/*8. Escreva um programa que calcule a velocidade de queda de um corpo em função
do tempo, partindo da velocidade zero, considerando a gravidade de diferentes
planetas conforme a tabela a seguir. Seu programa deve receber do usuário o
tempo (em milissegundos) de queda e um caractere indicando o planeta em que a
queda ocorreu. Planeta Gravidade Caractere indicativo Terra 9,807 m/s² T Lua
1,62 m/s² L Mercúrio 3,7 m/s² M O tempo informado deve ser maior que zero.
*/

#include <stdio.h>
#include <stdlib.h>
#define terra 9.807
#define venus 8.87
#define mercury 3.7

int main() {
  int g;
  float t, v;
  // pega a velocidade da queda
  printf("Informe o tempo percorrido:");
  scanf("%f", &t);
  // escolha de planeta
  printf("Escolha em qual planeta a queda ocorreu: 1:Terra 2:Venus  3:Mércurio");
  scanf("%d", &g);
  switch (g) {
  case 1:
    v = terra * t;
    printf("A velocidade é igual a %1.f", v);
    break;
  case 2:
    v = venus * t;
    printf("A velocidade é igual a %1.f", v);
    break;
  case 3:
    v = mercury * t;
    printf("A velocidade é igual a %1.f", v);
    break;

  default:
    printf("Valor incorreto. Tente novamente");
    break;
  }
  return 0;
}
