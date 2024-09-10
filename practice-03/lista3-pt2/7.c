/*
7. Desenvolver um programa que leia uma sequência de valores inteiros fornecida pelo usuário
em uma linha de entrada e conte o número de valores positivos, negativos e zeros.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n,positivo =0,negativo=0,zero=0, temp;
    printf("Quantos números você vai inserir? ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Digite um número: ");
        scanf("%d",&temp);
        if (temp < 0)
        {
            printf("O número %d é negativo",temp);
            negativo++;
        }else if (temp == 0)
        {
            printf("O número = 0");
            zero++;
        }else if(temp > 0){
            printf("O número %d é positivo",temp);
            positivo++;
        }
        printf("\n");
        
    }
    printf("Quantidade de números positivos: %d \n",positivo);
    printf("Quantidade de números negativos: %d \n",negativo);
    printf("Quantidade de números zero: %d \n",zero);
    return 0;
}