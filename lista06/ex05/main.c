/*5. Implemente um procedimento preencheValores que preencha um vetor X de 10
elementos. Na sequência, faça um procedimento copiaNegativos que receba um vetor
preenchido, teste e copie todos os valores negativos deste vetor para um novo
vetor, sem deixar elementos vazios entre os valores copiados. O vetor contendo
números negativos deve conter até 10 elementos - após o último número negativo
(caso não existam 10 número negativos) o vetor deve conter o número 0. Faça um
programa (main) que acione os procedimentos e imprima o vetor de números
negativos, sem imprimir o valor zero.
void preencheValores(int vetor[], int length);
void copiaNegativos(int vetor[], int length, int vetorNeg[]);*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// preenche os valores do vetor
// obs: o length é declarado na main
void preencheValores(int vetor[], int length) {
  printf("Insira %d valores: \n", length);
  for (int i = 0; i < length; i++) {
    scanf("%d", &vetor[i]);
  }
}

// essa função copia os valores negativos do vetor
void copiaNegativos(int vetor[], int length, int vetorNeg[]) {
  int numerosNegativos = 0;
  for (int i = 0; i < length; i++) {
    if (vetor[i] < 0) {
      // copiamos o elemento para o vetorNeg
      vetorNeg[numerosNegativos] = vetor[i];
      numerosNegativos++;
    }
  }
  // se tiver menos de 10 numeros negativos, o restante é preenchido com 0
  for (int i = numerosNegativos; i < length; i++) {
    vetorNeg[i] = 0;
  }
}

int main() {
  int x[10], vetorNegativo[10];

  preencheValores(x, 10); // o x é a variavel do vetor
  copiaNegativos(x, 10, vetorNegativo);
  printf("\nOs valores negativos sao: \n");
  //imprime os valores negativos exceto os que são 0
  for (int i = 0; i < 10; i++) {
    if (vetorNegativo[i] != 0) {
      printf("%d", vetorNegativo[i]);
    }
  }
  return 0;
}