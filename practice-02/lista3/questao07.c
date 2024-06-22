/*7. Escreva um programa que recebe um valor inteiro do usuário e imprima na tela todos os
números inteiros menores que o número inserido pelo usuário.*/

#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    while(num != 0)
    {
        num--;
        printf("%d\n", num);
    }
    
    return 0;
}