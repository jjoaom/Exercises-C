/*Para as questões 1 a 3 considere a declaração das seguintes constantes globais:
const int MAX_LIN=10;
const int MAX_COL=5;

2. Considere uma matriz quadrada MAX_LIN x MAX_LIN. Construa uma função que calcule
a soma dos valores posicionados acima da diagonal principal.

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const int MAX_LIN=10;
const int MAX_COL=5;

void preencheMatriz(int matriz[MAX_LIN][MAX_LIN]){
    for (int i = 0; i < MAX_LIN; i++)
    {
        for (int j = 0; j < MAX_LIN; j++)
        {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }
    
}

int somaDiagonal(int matriz[MAX_LIN][MAX_LIN]){
    int soma = 0;
    for (int i = 0; i < MAX_LIN; i++)
    {
        for (int j = 0; j < MAX_LIN; j++)
        {
            if (i < j)
            {
                soma = soma + matriz[i][j];
            }
        }
        
    }
    

    return soma;
}



int main(){
    setlocale(LC_ALL,"Portuguese");

    int matriz[MAX_LIN][MAX_LIN];

    preencheMatriz(matriz);
    
    printf("A soma dos valores posicionados acima da diagonal principal = %d", somaDiagonal(matriz));
    return 0;
}