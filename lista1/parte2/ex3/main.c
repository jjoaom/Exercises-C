/*3. Implemente um programa que leia um número inteiro com três dígitos (no formato CDU -
centena, dezena e unidade) e mostre o número invertido (no formato UDC).*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int c,d,u;
  printf("Insira 3 digitos no formato CDU, centena, dezena e unidade:\n");
  scanf("%d %d %d", &c, &d, &u);
  printf("O número no formado CDU é: %d%d%d e no formado UDC é %d%d%d", c,d,u,u,d,c);
  return 0;
}