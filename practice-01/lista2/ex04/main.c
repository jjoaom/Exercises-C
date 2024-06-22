/*4. Escreva um programa que indique o nome do mês por extenso, de acordo com um número
digitado pelo usuário.
Exemplo: Entrada = 4. Saída = "Abril". Seu programa deve exibir o mês correspondente para
qualquer valor de 1 a 12. Caso o usuário digite um valor menor que 1 ou maior que 12, seu
programa deve exibir a mensagem: “Mês inválido”.*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;
    //armazena o numero do mes
    printf("Digite um numero entre 0 e 12:\n");
    scanf("%d", &num);
    //lista de casos com todos os meses equivalentes a seus numeros
    switch(num){
        case 1:
        printf("Janeiro");
        break;
        case 2:
        printf("Fevereiro");
        break;
        case 3:
        printf("Março");
        break;
        case 4:
        printf("Abril");
        case 5:
        printf("Maio");
        break;
        case 6:
        printf("Junho");
        break;
        case 7:
        printf("Junho");
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
        //informe que o mes é invalido caso não seja nenhum valor acima
        default:
        printf("Mês invalido");
    }
    
}