/*9. Escreva um programa que leia quatro números inteiros positivos (w, x, y e
z) e efetue o cálculo de uma das seguintes médias de acordo com o valor de w
conforme a tabela a seguir: Valor 𝒘 Tipo de média Cálcul 1 Geométrica 𝑥 ⋅ 𝑦 ⋅ 𝑧
2 Ponderada (𝑥 + 2𝑦 + 3𝑧)
6
3 Harmônica
1
1
𝑥 + 1
𝑦 + 1
𝑧
4 Aritmética 𝑥 + 𝑦 + 𝑧
3
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int w, x, y, z, res;
  //coleta os valores de x y e z
  printf("Insira os valores de x,y,z\n");
  scanf("%d %d %d", &x, &y, &z);
  printf("Escolha a media a ser calculada. 1:Geometrica 2:Ponderada "
         "3:Harmonica 4:Aritmetica");
  //coleta o tipo de media a ser realizada
  scanf("%d", &w);
  //switch com cada tipo de media
  switch (w) {
  case 1:
    res = x * y * z;
    printf("A média geometrica equivale a: %d", res);
    break;
  case 2:
    res = (x + 2 * y + 3 * z) / 6;
    printf("A media ponderada equivale a: %d", res);
    break;
  case 3:
    res = (1 / (1 / x) + (1 / y) + (1 / z));
    printf("A media harmonica equivale a: %d", res);
  case 4:
    res = (x + y + z) / 3;
    printf("A media aritmetica equivale a: %d", res);
    break;
  default:
    printf("Valor invalido. Faça novamente");
    break;
  }

  return 0;
}