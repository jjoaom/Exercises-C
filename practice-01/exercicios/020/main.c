#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int data, idade,res;
  printf("Digite o ano atual:\n");
  scanf("%d", &data);
  printf("Digite a sua idade:\n");
  scanf("%d", &idade);
  res = data - idade;
  printf("Você nasceu no ano de %d",res);
  return 0;
}