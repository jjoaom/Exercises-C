/*4. Escreva um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
Crie um novo vetor, C, calculando C = A - B. Mostre na tela os dados do vetor C.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheVetor(int vetor[]){
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d valor do vetor:",i+1);
        scanf("%d",&vetor[i]);
    }
    
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int *vetorA = (int*)malloc(10 * sizeof(int));
    int *vetorB = (int*)malloc(10 * sizeof(int));
    int *vetorC = (int*)malloc(10 * sizeof(int));
    if(vetorA == NULL || vetorB == NULL || vetorC == NULL){
        printf("Erro ao alocar memória");
        return 1;
    }
    printf("Preencha o vetor A: \n");
    preencheVetor(vetorA);
    printf("Preencha o vetor B: \n");
    preencheVetor(vetorB);
    printf("C = A - B\n");
    for (int i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%d = %d - %d\n",vetorC[i],vetorA[i],vetorB[i]);
    }
    free(vetorA);
    free(vetorB);
    free(vetorC);
    return 0;
}