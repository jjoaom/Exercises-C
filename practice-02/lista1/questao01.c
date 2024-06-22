/*1. Implemente um algoritmo que solicite ao usuário um número inteiro n (digitado) e
posteriormente o sistema mostra o sucessor de n (ex. se o usuário digitou 15, o sistema deverá
imprimir 16).
*/
#include <stdio.h>

int main(){
    int n1,n2;
    printf("Digite um numero: \n");
    scanf("%d",&n1);
    n2=n1+1;
    printf("\nO sucessor de %d eh %d\n",n1,n2);
    return 0;
}