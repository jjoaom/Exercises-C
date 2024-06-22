/*3. Escreva um algoritmo que:
(a) Crie um arranjo de 5 elementos inteiros e o preencha de números
(b) Procure a posição do menor elemento deste arranjo
(c) Troque o menor elemento com elemento da primeira posição
(d) Imprima os elementos do arranjo
Cada um dos itens acima devem ser implementados em funções ou procedimentos
separados que recebem o vetor por parâmetro*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// função para criar o vetor com valores digitados pelo user
void criarVetor(int vetor[5]) {
  for (int i = 0; i < 5; i++) {
    printf("Digite o %d número para o vetor: \n", i + 1);
    scanf("%d", &vetor[i]);
  }
}

// procura a menor posição e atribui ela a variavel "menor"
int menorNum(int vetor[5]) {
  int menor = 0;
  for (int i = 1; i < 5; i++) {
    if (vetor[i] < vetor[menor]) {
      menor = i;
    }
  }
  return menor;
}
// essa função faz a troca do primeiro elemento do vetor para o menor elemento,
// e depois atribui o valor do primeiro elemento que estava em uma varivavel
// temporaria para o local onde estava o menor valor
void trocaNum(int vetor[5]) {
  int menor = menorNum(vetor);
  int temporaria = vetor[0];
  vetor[0] = vetor[menor];
  vetor[menor] = temporaria;
  printf("O menor valor é %d e ele foi trocado com %d \n", vetor[0], vetor[menor]);
}

void exibirVetor(int vetor[5]) {
  for (int i = 0; i < 5; i++) {
    printf("\nO valor %dº do vetor é: %d \n", i + 1, vetor[i]);
  }
}
// main que chama as funções
int main() {
  int vetor[5];
  criarVetor(vetor);
  menorNum(vetor);
  trocaNum(vetor);
  exibirVetor(vetor);
  return 0;
}