/*5. Escreva um programa que mostre ao usuário um menu com quatro opções de operações
matemáticas (1. soma, 2. subtração, 3. multiplicação, 4. divisão e 5. módulo). O usuário escolhe
uma das opções (1 a 5), e o seu programa recebe dois valores numéricos do usuário e realiza a
operação escolhida (somente a escolhida), mostrando o resultado. Caso a opção digitada seja
inválida (ou seja, menor que 1 ou maior que 5) ou os valores recebidos sejam inválidos, seu
programa deve mostrar uma mensagem indicando incorreção na entrada de dados.*/

#include <stdio.h>

int main(){
    int conta, x1,x2,x3;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &x1, &x2);
    printf("1. soma, 2. subtracao, 3. multiplicacao, 4. divisao e 5. modulo\nDigite um numero para realizar alguma conta.\n");
    scanf("%d", &conta);
    switch (conta)
    {
    case 1:
        x3 = x1 + x2;
        printf("%d + %d = %d", x1,x2,x3);
        break;
    case 2:
        x3 = x1 - x2;
        printf("%d - %d = %d", x1,x2,x3);
        break;
    case 3:
        x3 = x1 * x2;
        printf("%d * %d = %d", x1,x2,x3);
        break;
    case 4:
        x3 = x1 / x2;
        printf("%d / %d = %d", x1,x2,x3);
        break;
    case 5:
        x3 = x1 % x2;
        printf("%d %% %d = %d", x1,x2,x3);
        break;    
    default:
        printf("Entrada de dados incorreta.");
        break;
    }
    return 0;
}