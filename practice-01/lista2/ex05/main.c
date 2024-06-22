/*5. Escreva um programa que mostre ao usuário um menu com quatro opções de operações
matemáticas (1. soma, 2. subtração, 3. multiplicação, 4. divisão e 5. módulo). O usuário escolhe
uma das opções (1 a 5), e o seu programa recebe dois valores numéricos do usuário e realiza a
operação escolhida (somente a escolhida), mostrando o resultado. Caso a opção digitada seja
inválida (ou seja, menor que 1 ou maior que 5) ou os valores recebidos sejam inválidos, seu
programa deve mostrar uma mensagem indicando incorreção na entrada de dados.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int conta,num1,num2,res;
    //armazena os numeros a serem calculados
    printf("Digite o primeiro numero: "); 
    scanf("%d", &num1);
    printf("Digite o segundo numero:");
    scanf("%d", &num2);
    printf("Escolha uma opção para fazer seu cálculo:\n");
    //escolhe a conta a ser realizada
    printf("1. soma, 2. subtração, 3. multiplicação, 4. divisão e 5. módulo");
    scanf("%d", &conta);
    switch(conta){
        case 1:
        //calculadora da soma
        res = num1 + num2;
        printf("\n%d + %d = %d\n", num1,num2,res);
        break;
        case 2:
        //calculadora de subtração
        res = num1 - num2;
        printf("\n%d - %d = %d\n", num1,num2,res);
        break;
        case 3:
        res = num1 * num2;
        printf("\n%d * %d = %d\n", num1,num2,res);
        break;
        case 4:
        //calculadora de divisao
        res = num1 / num2;
        printf("\n%d / %d = %d\n", num1,num2,res);
        break;
        case 5 :
        //calculadora de modulo
        res = num1 % num2;
        printf("\n%d %% %d = %d\n", num1,num2,res);
        break;
        default :
        //valor incorreto
        printf("Entrada incorreta. Tente novamente.");
    }
    return 0;
}