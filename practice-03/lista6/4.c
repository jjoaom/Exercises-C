/*4. Escreva um programa que preencha dois vetores de inteiros A e B com 4 números ordenados
(em cada vetor). Em seguida, implemente um procedimento Merge, que receba os vetores A e B
e retorne um vetor C ordenado, combinando os resultados dos vetores A e B. Imprima o vetor C
na função main. A, B e C devem ser alocados usando malloc ou calloc.
Obs. 1: O vetor C deve ser instanciado (“alocado”) no procedimento Merge.
Obs. 2: Após a impressão dos valores, o comando free deve ser executado para liberação de
memória dos vetores A, B e C.
Ex.: A = {5, 8, 12, 16} , B = {3, 7, 14, 15} , C = {3, 5, 7, 8 ,12, 14, 15, 16}
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheVetor(int *vetor[]){
    for (int i = 0; i < 4; i++)
    {
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&vetor[i]);
    }
    
}

void merge(int *vetorA[], int vetorB[]){
    int *C = (int*)malloc(8 * sizeof(int));
    if (!C)
    {
        return 1;
    }
    int maior = -100000000, menor = 100000000;
    for (int i = 0; i < 8; i++)
    {
        
        if (vetorA[i] < menor && vetorA[i] < vetorB[i])
        {
            menor = vetorA[i];
            C[i] = menor;
        }
        if (vetorB[i] < menor && vetorB[i] < vetorA[i])
        {
            menor = vetorB[i];
            C[i] = menor;
        }
        
        
    }
    
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int *A = (int*)malloc(4 * sizeof(int));
    int *B = (int*)malloc(4 * sizeof(int));
    
    if (!A || !B)
    {
        return 1;
    }
    printf("Preencha o vetor A:\n");
    preencheVetor(A);
    printf("Preencha o vetor B: \n");
    preencheVetor(B);

    merge(&A,&B);

    free(A);
    free(B);

    return 0;
}