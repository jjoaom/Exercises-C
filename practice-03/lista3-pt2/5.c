/*
5. Escreva um programa que leia um número L e imprima todos os elementos da série de
Fibonacci menores que L.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    do
    {
        printf("Digite um número maior que 0: ");
        scanf("%d",&n);
    } while (n <= 0);
    
    return 0;
}