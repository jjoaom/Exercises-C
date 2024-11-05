/*5. Desenvolva um programa que instancie um vetor de inteiros A utilizando malloc. O programa
deve ler um valor k, onde k é positivo e menor que o tamanho do vetor (rejeite entradas
inválidas). Implemente um procedimento que receba como parâmetros o vetor A, o tamanho do
vetor |A| e o valor k. Retorne o k-ésimo menor elemento do vetor.
Ex.: A = {3, 5, 7, 8 ,12, 14, 15, 16}, k = 3, retorno = 7.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&vetor[i]);
    }
    
}

void buscaElemento(int vetor[],int tamanho, int k){
    for (int i = 0; i < tamanho; i++)
    {
        if (i == k-1)
        {
            printf("O %dº valor do vetor é %d\n",k,vetor[i]);
        }
        
    }
    
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int tamanho,k;
    int *A =(int*)malloc(tamanho * sizeof(int));
    if (!A)
    {
        return 1;
    }
    printf("Digite o tamanho do vetor A: ");
    scanf("%d",&tamanho); 
    preencheVetor(A,tamanho);
    printf("Escolha qual elemento de 0 a %d você quer imprimir: ",tamanho);
    scanf("%d",&k);
    buscaElemento(A,tamanho,k);
    free(A);
    return 0;
}