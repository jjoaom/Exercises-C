/*22. Escreva um programa que apresente o menu de opções a seguir e permita ao usuário escolher
a opção desejada. Leia os dados necessários para executar a operação e mostre o resultado. Esse
processo deverá ser repetido até que o usuário escolha a opção 4.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int menu=0,meses=0;
    float salario =0.0;
    do
    {
        printf("Menu de opções: \n");
        printf("1.Novo salário \n");
        printf("2.Férias \n");
        printf("3.Décimo terceiro \n");
        printf("4.Sair \n");

        scanf("%d",&menu);

        switch (menu)
        {
        case 1:
            while (salario <= 0.0)
            {
                printf("Insira o salário do funcionário: ");
                scanf("%f",&salario);
            }
            if (salario <= 999.99)
            {
                salario += (salario*0.15);
            }else if(salario >= 1000.00 && salario <= 2000.00){
                salario += (salario*0.10);
            }else if(salario > 2000.0){
                salario += (salario*0.05);
            }
            printf("O novo salário é de R$%.2f\n",salario);
            break;
        case 2:
            while (salario <= 0.0)
            {
                printf("Insira o salário do funcionário: ");
                scanf("%f",&salario);
            }
            printf("O valor das férias é de R$%.2f\n",salario + (salario / 3.0));
            break;
        case 3:
            while (salario <= 0.0)
            {
                printf("Insira o salário do funcionário: ");
                scanf("%f",&salario);
            }
            while (meses <= 0 || meses > 12)
            {
                printf("Insira a quantidade de meses trabalhados: ");
                scanf("%d", &meses);
            }
            printf("O décimo terceiro do salário é de R$%.2f\n",salario * ((float)meses / 12));
            break;
        case 4:
            printf("Fim.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }

    } while (menu != 4);
    
    

    return 0;
}
