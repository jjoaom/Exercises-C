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
    int x,y;
    printf("Digite a dimensão de x: \n");
    scanf("%d",&x);
    printf("Digite a dimensão de y: \n");
    scanf("%d",&y);
    for (int i = 0; i < x; i++)
    {
        printf("*");
        for (int j = 1; j < y; j++)
        {
            printf("*");
            
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}