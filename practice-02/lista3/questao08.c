/*8. Escreva um programa que recebe um valor inteiro do usuário e imprima quantos dígitos o
número inserido possui. Exemplo:
Usuário digita 2785
Programa imprime: 4 dígitos*/

#include <stdio.h>

int main(){
    int num,aux = 0, temp;

    printf("Digite um numero:\n");
    scanf("%d",&num);
    temp = num;
    while (num <= 0)
    {
        printf("numero menor ou igual a zero. Insira outro valor");
        scanf("%d", &num);
    }
    while (temp > 0)
    {
        temp /= 10;
        aux++;
    }
    
    printf("%d digitos", aux);
    
    return 0;
}