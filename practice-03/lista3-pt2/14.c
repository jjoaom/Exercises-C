/*14. Escreva um programa que simule uma conta bancária. Inicialmente o saldo deve ser 0
(zero). Seu programa deve apresentar um menu com as opções de depósito, saque,
transferência e saldo. Além disso, o programa não deve permitir operações inválidas
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int menu;
    float saldo = 0.0,temp = 0.0;
    
    while (menu != 5)
    {
        printf("BEM VINDO A SUA CONTA BANCÁRIA\n");
        printf("1-Deposíto\n");
        printf("2-Saque\n");
        printf("3-Transferência\n");
        printf("4-Saldo\n");
        printf("5-Sair\n");
        printf("Digite uma opção: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("Quanto você deseja depositar? \n")/
            scanf("%f",&temp);
            if (temp > 0)
            {
                saldo += temp;
                printf("Saldo de R$%.2f depositado com sucesso. Total na conta R$%.2f\n",temp, saldo);
            }else{
                printf("Valor inválido. Tente novamente.");
            }
            break;
        case 2:
            printf("Quanto você deseja sacar? \n")/
            scanf("%f",&temp);
            if (temp > 0 && temp <= saldo)
            {
                saldo -= temp;
                printf("Saque de R$%.2f realizado com sucesso. Total na conta R$%.2f\n",temp, saldo);
            }else if(temp > saldo){
                printf("Saldo insuficiente para este saque. Tente novamente.");
            }else{
                printf("Valor inválido. Tente novamente.");
            }
            break;
        case 3:
            printf("Quanto você deseja sacar? \n")/
            scanf("%f",&temp);
            if (temp > 0 && temp <= saldo)
            {
                saldo -= temp;
                printf("Transferência de R$%.2f realizado com sucesso. Total na conta R$%.2f\n",temp, saldo);
            }else if(temp > saldo){
                printf("Saldo insuficiente para esta transferência. Tente novamente.");
            }else{
                printf("Valor inválido. Tente novamente.");
            }
            break;
        case 4:
            printf("Seu saldo é de: R$%.2f reais.\n",saldo);
            break;
        case 5:
            printf("Obrigado pela preferência.");
            return 0;
            break;
        default:
            printf("Opção incorreta. Tente novamente.");
            menu = 5;
            break;
        }
    }
    
    return 0;
}
