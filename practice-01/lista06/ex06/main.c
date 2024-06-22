/*6. Escreva um programa que leia uma palavra e a imprima de trás-para-frente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// essa função pega a palavra digitada pelo usuario de ate 99 chars
void lerPalavra(char palavra[100]) {
  printf("Digite um texto: \n");
  scanf("%99s", palavra);
  printf("A palavra é: %s \n", palavra);
}
// essa função funciona contando a quantidade de caracteres que tem na palavra
// digitada acima, ela usa essa quantidade para fazer o loop for para imprimir o
// texto em forma de decremento, fazendo da forma inversa
void inversoPalavra(char palavra[100]) {
  int length = strlen(palavra);
  printf("A palavra ao contrário é: ");
  for (int i = length - 1; i >= 0; i--) {
    printf("%c", palavra[i]);
  }
  printf("\n");
}
int main() {
  char palavra[100];
  lerPalavra(palavra);
  inversoPalavra(palavra);
  return 0;
}
