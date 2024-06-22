/*5. Implemente um programa que o usuário informa o valor a ser investido, uma
taxa de juros mensal a ser aplicada ao capital, e o número de meses que irá
durar a aplicação. Ao final o programa deverá mostrar: • O valor total acumulado
ao final período. • O valor de juros rendidos.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  float c, j, taxa, jr;
  int t;
  printf("Informe o valor ser investido:");
  scanf("%f", &c);

  printf("Informe a taxa de juros mensal que será aplicada:");
  scanf("%f", &taxa);

  printf("A quantidade em meses que irá durar a aplicação");
  scanf("%d", &t);

  // calcula a taxa de juros simples
  j = c * (taxa / 100) * t;

  // soma os juros rendidos com o valor total
  jr = c + j;
  printf("O valor total acumulado é de R$%.2f\n", jr);
  printf("O valor de juros rendidos é de R$%.2f", j);
  return 0;
}