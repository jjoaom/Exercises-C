/*4. Escreva um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
Crie um novo vetor, C, calculando C = A - B. Mostre na tela os dados do vetor C*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//função sem retorno que cria o VETOR A e pede valores ao user
void vetorA(int a[10]){
    for (int i = 0; i < 10; i++){
        printf("Digite o %dº número para o vetor A: ", i + 1);
        scanf("%d",&a[i]);
    }
}
//função sem retorno que cria o VETOR B e pede valores ao user
void vetorB(int b[10]){
    for (int i = 0; i < 10; i++){
        printf("Digite o %dº número para o vetor B: ", i + 1);
        scanf("%d",&b[i]);
    }
}
//Função com retorno que cria o vetor C, sendo ele a subtração do vetor A com B
int vetorC(int c[], int a[], int b[]){
    printf("Vetor C = A - B: \n");
    for (int i = 0; i < 10; i++) {
        c[i] = a[i] - b[i];
        printf("%d ", c[i]);
    }
}
//Execução das funções na main
int main(){
    int vetor1[10], vetor2[10], vetor3[10];
    vetorA(vetor1);
    vetorB(vetor2);
    vetorC(vetor1, vetor2, vetor3);

    return 0;
}
