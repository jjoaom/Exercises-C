/******************************************************************************

Crie um programa que receba dois números inteiros e
realize as quatro operações básica da matemática: +, -, *, /
 Seu programa deve ter um menu para o usuário
escolher qual operação a ser executada, implementada
utilizando um procedimento.
 Cada operação matemática deve ser implementada por
meio de procedimentos

*******************************************************************************/

#include <stdio.h>

void soma(int n1,int n2){
    int soma = n1 + n2;
    printf("%d + %d = %d", n1,n2,soma);
}
void sub(int n1,int n2){
    int sub = n1 - n2;
    printf("%d - %d = %d", n1,n2,sub);
}
void mult(int n1,int n2){
    int mult = n1 * n2;
    printf("%d * %d = %d", n1,n2,mult);
}
void divi(int n1,int n2){
    int divi = n1 / n2;
    printf("%d / %d = %d", n1,n2,divi);
}

void menu(){
    printf("Menu - Calculo\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair\n");
}

int main()
{
    int n1,n2,resp;
    printf("Digite dois numeros:\n");
    scanf("%d %d",&n1,&n2);
    menu();
    scanf("%d",&resp);
    switch(resp){
        case 1:
        soma(n1,n2);
        break;
        case 2:
        sub(n1,n2);
        break;
        case 3:
        mult(n1,n2);
        break;
        case 4:
        divi(n1,n2);
        break;
        default:
        printf("Fim.\n");
        break;
    }

    return 0;
}
