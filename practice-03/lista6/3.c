/*Para as questões 1 a 3 considere a declaração das seguintes constantes globais:
const int MAX_LIN=10;
const int MAX_COL=5;


3. Considere uma matriz quadrada MAX_LIN x MAX_LIN. Construa um procedimento que
escreva os elementos da diagonal secundária.

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

void diagonalSecundaria(int matriz[MAX_LIN][MAX_LIN]){
    for (int i = 0; i < MAX_LIN; i++)
    {
        printf("%d\n",matriz[i][MAX_LIN - 1 - i]);
    }
    
}


int main(){
    setlocale(LC_ALL,"Portuguese");

    int matriz[MAX_LIN][MAX_LIN];

    preencheMatriz(matriz);
    diagonalSecundaria(matriz);
    return 0;
}