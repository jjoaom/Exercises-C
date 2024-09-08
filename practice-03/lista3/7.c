/*
7. Escreva um programa que leia dois inteiros e imprima um retângulo com as dimensões
digitadas. Ex.: para os números 3 e 5, seria impresso:
*****
* *
*****
Enquanto que para os números 5 e 3 seria impresso:
***
* *
* *
* *
***
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int altura,largura;
    printf("Digite a altura do retângulo: \n");
    scanf("%d",&altura);
    printf("Digite a largura do retângulo: \n");
    scanf("%d",&largura);
    for (int i = 0; i < altura; i++)
    {
        printf("*");
        for (int j = 1; j < largura; j++)
        {
            printf("*");
            
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}