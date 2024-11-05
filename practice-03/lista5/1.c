/*1. Escreva um programa que leia da entrada padrão 5 números reais, que devem ser armazenados
em um arranjo. Em seguida, gere outro arranjo, cujos valores correspondem ao dobro dos
respectivos elementos do primeiro arranjo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheVetor(double vetor[]){
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº valor: ",i+1);
        scanf("%lf",&vetor[i]);
    }
    
}

void dobraVetor(double vetor[], double dobro[]){
    for (int i = 0; i < 5; i++)
    {
        dobro[i] = vetor[i] * 2;
    }
    
}

void imprimeVetor(double vetor[]){
    for (int i = 0; i < 5; i++)
    {
        printf("%.1lf\n",vetor[i]);
    }
    
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    double *vetor=(double*)malloc(5 * sizeof(double));
    double *dobro=(double*)malloc(5*sizeof(double));
    if (!vetor || !dobro)
    {
        return 1;
    }
    preencheVetor(vetor);
    dobraVetor(vetor,dobro);
    imprimeVetor(dobro);
    free(vetor);
    free(dobro);
    return 0;
}
