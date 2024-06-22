/*5. Implemente um programa que o usuário informa o valor a ser investido, uma taxa de juros
mensal a ser aplicada ao capital, e o número de meses que irá durar a aplicação. Ao final o
programa deverá mostrar:
• O valor total acumulado ao final período.
• O valor de juros rendidos.*/
#include <stdio.h>
#include <math.h>

int main(){
    double valor,juros,valorTotal, jurosR;
    int meses;
    printf("Qual valor vai ser investido?\n");
    scanf("%lf", &valor);
    printf("Qual a taxa de juros mensal?\n");
    scanf("%lf", &juros);
    printf("Por quantos meses vai durar a aplicacao?\n");
    scanf("%d", &meses);
    valorTotal = valor * pow(1 + juros, meses);
    jurosR = valorTotal - valor;
    printf("Valor total acumulado: R$%.1lf\n", valorTotal);
    printf("Valor de juros rendidos: R$%.1lf\n", jurosR);
    return 0;
}