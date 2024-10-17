/*6. Escreva um programa que preencha e imprima na tela um vetor de tamanho 50, cujos valores
são dados pela seguinte fórmula: vet[i] = (i + (3 x i)) % (i+1)
onde i corresponde à posição do elemento no vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheVetor(int vetor[]){
    for (int i = 0; i < 50; i++)
    {
        vetor[i] = (i + (3 * i)) % (i+1);
    }
    
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int *vetor =(int*)malloc(50*sizeof(int));
    if (vetor == NULL)
    {
        printf("ERRO ao alocar memória.");
        return 1;
    }
    
    preencheVetor(vetor);
    for (int i = 0; i < 50; i++)
    {
        printf("%d\n",vetor[i]);
    }
    free(vetor);
    return 0;
}