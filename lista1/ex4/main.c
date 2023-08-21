/*4. Implemente um programa que leia a quantidade de eleitores de um município,
o número de votos brancos, nulos e válidos. Calcule e imprima o percentual de
cada um dos tipos de votos (brancos, nulos e válidos).*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int qnt, branco, pbranco, nulo, pnulo, valido, pvalido;
  printf("Informe a quantidade de eleitores de um municipio:\n");
  scanf("%d", &qnt);
  printf("Informe o numero de votos brancos:\n");
  scanf("%d", &branco);
  printf("Informe o numero de votos nulos:\n");
  scanf("%d", &nulo);
  printf("Informe o numero de votos válidos:\n");
  scanf("%d", &valido);
  // calcula o percentual dos votos de acordo com o numero de eleitores
  pbranco = (branco * qnt) / 100;
  pnulo = (nulo * qnt) / 100;
  pvalido = (valido * qnt) / 100;
  printf("O percentual de votos brancos é de %d%.\n", pbranco);
  printf("O percentual de votos nulos é de %d%.\n", pnulo);
  printf("O percentual de votos válidos é de %d%.\n", pvalido);
  return 0;
}