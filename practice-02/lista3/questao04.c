/*4. Crie um algoritmo para calcular o valor total de uma compra. O programa deve ler o valor do
produto e a quantidade, e ao final, apresentar o total da compra.*/
#include <stdio.h>

int main() {
    double valorP, valorTotal;
    int produtos, qntP;
    printf("Insira a quantidade de produtos da compra:\n");
    scanf("%d", &produtos);
    while(produtos <= 0){
        printf("Valor invalido. Insira a quantidade de produtos da compra:\n");
        scanf("%d", &produtos);
    }
    for (int i = 0; i < produtos; i++)
    {
        printf("Insira o valor do produto:\n");
        scanf("%lf", &valorP);
        printf("Insira a quantidade do produto:\n");
        scanf("%d", &qntP);
        valorTotal += (double)(valorP * qntP);
    }
    printf("O valor total da compra = R$%.1lf", valorTotal);
    return 0;
}
