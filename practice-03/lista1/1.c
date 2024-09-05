/*1. Implemente um algoritmo que solicite ao usuário um número inteiro n (digitado) e
posteriormente o sistema mostra o sucessor de n (ex. se o usuário digitou 15, o sistema deverá
imprimir 16).*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Digite um número: \n");
    scanf("%d", &x);
    printf("Sucessor de %d é %d", x, x+1);
    return 0;
}