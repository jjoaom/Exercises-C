/*2. Escreva um programa que preencha um vetor de tamanho 100 com os 100
primeiros números naturais que não são múltiplos de 6 e que não terminam com 6.
Atenção: todas as 100 posições do vetor devem ser preenchidas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//função que verifica os numeros e cria o vetor
void VerificaNum() {
  int i = 0;
  int vetor[100];
  int x;
  //enquanto contador for menor que 100 o if verifica se não é multiplo de 6 e se não termina com 6 e insire no vetor
  while (i < 100) {
    if (x % 6 != 0 && x % 10 != 6) {
      vetor[i] = x;
      i++;
    }
    x++;
  }
//imprime o vetor para o usuario
  for (i = 0; i < 100; i++) {
    printf("%d ", vetor[i]);
  }
}

int main() { 
  VerificaNum(); 
  return 0;
}