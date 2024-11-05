/*B3. Desenvolva um programa que preencha dois vetores de inteiros A e B com 5 valores inteiros
aleatórios entre 0 e 10. Crie uma função que gere um vetor C, correspondente a união dos vetores
A e B (𝐴 ∪ 𝐵 ). Obs: C não deve conter valores repetidos. Utilize o comando malloc para
instanciar os vetores de inteiros com 5 elementos cada. Caso necessário, utilize o comando realloc
para redimensionar o vetor C. O vetor C não deve conter posições não preenchidas no vetor,
correspondendo exatamente a |𝐴 ∪ 𝐵|.*/

// rand() % 100)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

void preencheRand(int vetor[]){
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = rand() % 11;
    }
    
}

int jaExiste(int vetor[], int valor){
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] == valor)
        {
            return 1;
        }
        
    }
    return 0;
}

int* vetorC(int A[,int B[]]){
    int *C=(int*)malloc
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int *A=(int*)malloc(5 * sizeof(int));
    int *B=(int*)malloc(5*sizeof(int));
    if (!A || !B)
    {
        return 1;
    }
    preencheRand(A);
    preencheRand(B);
    vetorC(A,B);

    free(A);
    free(B);
    return 0;
}