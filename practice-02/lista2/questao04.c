/*4. Escreva um programa que indique o nome do mês por extenso, de acordo com um número
digitado pelo usuário.
Exemplo: Entrada = 4. Saída = "Abril". Seu programa deve exibir o mês correspondente para
qualquer valor de 1 a 12. Caso o usuário digite um valor menor que 1 ou maior que 12, seu
programa deve exibir a mensagem: “Mês inválido”.*/

#include <stdio.h>

int main(){
    int mes;
    printf("Digite um numero de 1 a 12\n");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;        
    default:
        printf("Numero invalido.");
        break;
    }
    return 0;
}