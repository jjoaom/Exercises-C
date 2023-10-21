
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criarVetor(int vetor[5]) {
  for (int i = 0; i < 5; i++) {
    printf("Digite o %dº num do vetor: \n", i + 1);
    scanf("%d", &vetor[i]);
  }
}

void menorVetor(int vetor[5]) {
  int menor = vetor[0];
  for (int i = 1; i < 5; i++) {
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }
  printf("O menor numero do vetor é %d \n", menor);
}

void exibirVetor(int vetor[5]) {
  for (int i = 0; i < 5; i++) {
    printf("\nO valor %dº do vetor é: %d \n", i + 1, vetor[i]);
  }
}

void somaVetor(int vetor[5]){
  int soma = 0;
  for (int i = 0; i < 5; i++){
    soma += vetor[i];
  }
  printf("A soma dos vetores = %d ", soma);
}

int main() {
  int vetor[5];
  criarVetor(vetor);
  menorVetor(vetor);
  exibirVetor(vetor);
  somaVetor(vetor);
  return 0;
}