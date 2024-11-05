/*Para as questões 1 a 3 considere a declaração das seguintes constantes globais:
const int MAX_LIN=10;
const int MAX_COL=5;

1. Construa uma função que calcule e retorne a soma dos valores de uma linha i de uma matriz.
A função deverá ter os seguintes argumentos:
- A passagem por referência da matriz;
- O número da linha a ser calculada.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const int MAX_LIN=10;
const int MAX_COL=5;

void preencheMatriz(int matriz[MAX_LIN][MAX_COL]){
    for (int i = 0; i < MAX_LIN; i++){
        for (int j = 0; j < MAX_COL; j++){
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", matriz[i][j]);
        }
    }
}

int somaMatrix(int matriz[MAX_LIN][MAX_COL],int linha){
    int soma = 0;
    for (int j = 0; j < MAX_COL; j++)
    {
        soma = soma + matriz[linha][j];
    }
    return soma;
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int linha,matriz[MAX_LIN][MAX_COL];

    preencheMatriz(matriz);

    do
    {
        printf("Digite a linha que deseja somar da matriz (0 a %d): \n",MAX_LIN-1);
        scanf("%d",&linha);
    } while (linha<0 || linha >= MAX_LIN);
    
    printf("A soma da %d linha = ",linha,somaMatrix(matriz,linha));
    
    return 0;
}