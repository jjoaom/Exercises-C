/*

1. Escreva um programa que leia da entrada padrão 5 números reais, que devem ser armazenados
em um arranjo. Em seguida, gere outro arranjo, cujos valores correspondem ao dobro dos
respectivos elementos do primeiro arranjo.

Descrição: a função tem por objetivo ler 5 inteiros e dobrar o valor deles.
Entrada: x[5] (real)
Saída: y[5] - real
*/
#include <stdio.h>

int main()
{
    float x[5], y[5];
    printf("Digite 5 numeros reais: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &x[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\t", x[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        y[i] = (x[i] * 2);
    }
    printf("\nDobro:");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%.1f\t", y[i]);
    }
    return 0;
}