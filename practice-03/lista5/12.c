/*5. Implemente um procedimento preencheValores que preencha um vetor X de 10 elementos. Na
sequência, faça um procedimento copiaNegativos que receba um vetor preenchido, teste e copie
todos os valores negativos deste vetor para um novo vetor, sem deixar elementos vazios entre os
valores copiados. O vetor contendo números negativos deve conter até 10 elementos - após o
último número negativo (caso não existam 10 número negativos) o vetor deve conter o número
0. Faça um programa (main) que acione os procedimentos e imprima o vetor de números
negativos, sem imprimir o valor zero.
void preencheValores(int vetor[], int length);
void copiaNegativos(int vetor[], int length, int vetorNeg[]);*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheValores(int vetor[], int lenght){
    for (int i = 0; i < lenght; i++)
    {
        printf("Insira o %dº valor do vetor: ",i+1);
        scanf("%d", &vetor[i]);
    }
    
}

void copiaNegativos(int vetor[],int lenght, int vetorNeg[]){
    int j=0;
    for (int i = 0; i < lenght; i++)
    {
        if(vetor[i] < 0){
            vetorNeg[j] = vetor[i];
            j++;
        }
    }
    for (int i = j; i < 10; i++)
    {
        vetorNeg[i] = 0;
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d\n",vetorNeg[i]);
    }
    
    
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int length;
    do
    {
        printf("Escolha o tamanho do vetor de até 10 elementos\n");
        scanf("%d",&length);
    } while (length > 10 || length <= 0);

    int *vetor = (int*)malloc(length * sizeof(int));
    int *vetorNeg = (int*)malloc(10 * sizeof(int));
    if (vetor == NULL || vetorNeg == NULL)
    {
        printf("Erro ao alocar memória.");
        return 1;
    }
    
    preencheValores(vetor,length);
    copiaNegativos(vetor, length,vetorNeg);
    
    free(vetor);
    free(vetorNeg);
    return 0;
}