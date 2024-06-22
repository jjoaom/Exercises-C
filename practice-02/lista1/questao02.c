/*2. Implemente um algoritmo que solicita o valor de 3 notas (n1, n2 e n3) e depois mostra: a soma,
a média e o produto das notas*/

#include <stdio.h>

int main(){
    int n1,n2,n3,soma,media,prod;
    printf("Insira 3 numeros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    soma = n1 + n2 + n3;
    media = soma/3;
    prod = n1 * n2 * n3;
    printf("%d + %d + %d = %d\n", n1, n2, n3, soma);
    printf("Media: %d", media);
    printf("Produto: %d", prod);
    return 0;
}