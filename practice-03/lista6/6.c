/*6. Escreva um progama que leia do teclado um valor n. Instancie, usando o comando malloc, uma
matriz de números em ponto flutuante Mn×n. Encontre (a) o maior elemento, (b) o menor
elemento, (c) a média dos elementos da matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void operacoes(float **mat, int n){
    float maior = -100000000.0,menor = 100000000.0,soma=0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][i] > maior)
            {
                maior = mat[i][j];
            }
            if (mat[i][j] < menor)
            {
                menor = mat[i][j];
            }
            soma= soma + mat[i][j];
        }
        
    }
    printf("O maior valor é %.1f\n",maior);
    printf("O menor valor é %.1f\n",menor);
    printf("A média dos elementos é %.1f\n",(soma/(n*n)));
}

void preencheVetor(float **mat, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Valor de [%d][%d]: ",i,j);
            scanf("%f",&mat[i][j]);
        }
        
    }
    
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n=0;
    do
    {
        printf("Digite o tamanho da matriz: ");
        scanf("%d",&n);
    } while (n <= 0);
    float **mat=malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {       
        mat[i] =malloc(n * sizeof(float));
    }
    
    if (!mat)
    {
        return 1;
    }
    preencheVetor(mat,n);
    operacoes(mat,n);

    free(mat);
    return 0;
}