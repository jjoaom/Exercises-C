/*1. Escreva um programa para preencher um vetor com 20 vinte valores inteiros
(os valores podem ser lidos do teclado ou gerados automaticamente). Em seguida,
o sistema deve solicitar ao usuário um valor, que deve ser pesquisado no vetor.
Imprima as posições do vetor que armazena o valor informado. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//função para gerar os números random e inserir no vetor de 20 positions
void geradorNumVetor(int vetor[20]) {
  // gerando números aleatórios
  srand(time(0));
  printf("Vinte numeros aleatorios entre 0 e 99: ");
  for (int i = 0; i < 20; i++) {
    vetor[i] = rand() % 100;
    printf(" %d \n", vetor[i]);
  }
}
//função para pesquisar o valor digitado pelo usuario no vetor
void pesquisaVetor(int valor, int vetor[20]) {
  printf("Digite um valor para pesquisar no vetor: ");
  scanf("%d", &valor);

  // esse if verifica se o valor digitado pelo usuário se encontra no vetor
  for (int i = 0; i < 20; i++) {
    if (vetor[i] == valor) {
      printf("O valor %d foi encontrado na posição %d do vetor.\n", valor, i);
    }
  }
}
//main executando as duas funções
int main() {
  int Numeros[20];
  int valor;

  geradorNumVetor(Numeros);

  pesquisaVetor(valor, Numeros);

  return 0;
}
