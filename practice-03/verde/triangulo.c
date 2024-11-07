/*Escrever um programa que recebe um inteiro positivo não nulo imprime um triângulo retângulo formado apenas por símbolos de asterisco (“*”) e de espaço (“ ”) como no exemplo a seguir (para i = 5):

*
**
***
****
*****


Entrada: Um número inteiro N

Saída: N linhas, sendo que em cada linha é adicionado um *.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n =5;
    //scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("*");
        for (int j = 0; j < n; j++)
        {
            printf(" ");
            
        }
        printf("\n");
    }
    
    return 0;
}