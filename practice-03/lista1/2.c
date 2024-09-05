/*2. Implemente um algoritmo que solicita o valor de 3 notas (n1, n2 e n3) e depois mostra: a soma,
a média e o produto das notas.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1,n2,n3,soma,media,prod;
    printf("Digite 3 números: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    soma = n1 + n2 + n3;
    printf("%d + %d + %d = %d\n", n1,n2,n3,soma);
    media = soma / 3;
    printf("Média = %d\n", media);
    prod = n1 * n2 * n3;
    printf("%d * %d * %d = %d\n", n1,n2,n3,prod);
    return 0;
}