/*6. Escreva um programa que receba 2 pontos cartesianos (x, y) e calcule a
distância Euclidiana entre eles. 𝑑 = √(𝑥2 − 𝑥1) 2 + (𝑦2 − 𝑦1) */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double x1, x2, y1, y2, d;
  printf("Escreva os dois valores do ponto de x.\n");
  scanf("%lf %lf", &x1, &x2);
  printf("Escreva os dois valores do ponto de y.\n");
  scanf("%lf %lf", &y1, &y2);
  // realiza a formula de distancia euclidiana
  d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  //imprime o resultado arredondando para baixo
  printf("A distancia Euclidiana entre eles é de %lf", floor(d));
  return 0;
}