/*4. Escreva um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
Crie um novo vetor, C, calculando C = A - B. Mostre na tela os dados do vetor C*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vetorA(int a[]){
    int a[10];
    for (int i = 0; i < 10; i++){
        printf("Digite um número:");
        scanf("%d",&a[i]);
    }
}
void vetorB(int b[]){
    int b[10];
    for (int i = 0; i < 10; i++){
        printf("Digite um número:");
        scanf("%d",&b[i]);
    }
}
int vetorC(int b[], int a[]){
    printf("Vetor C = A - B:\n");
    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
        printf("%d ", C[i]);
    }
}

int main(){

    return 0;
}
