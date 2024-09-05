/*5. Implemente um programa que o usuário informa o valor a ser investido, uma taxa de juros
mensal a ser aplicada ao capital, e o número de meses que irá durar a aplicação. Ao final o
programa deverá mostrar:
• O valor total acumulado ao final período.
• O valor de juros rendidos.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valor,juros;
    int meses;
    printf("Digite o valor a ser investido: \n");
    scanf("%f",&valor);
    printf("Digite a taxa de juros mensal: \n");
    scanf("%f",&juros);
    printf("Digite o número de meses: \n");
    scanf("%d",&meses);
    
    return 0;
}