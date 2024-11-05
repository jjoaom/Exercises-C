#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void menu(){
    printf("Menu: \n");
    printf("1_Opção 1\n");
    printf("2_Opção 2\n");
    printf("3_Opção 3\n");
    printf("4_Opção 4\n");
    printf("Escolha uma opção: \n");
}

int main(){
    setlocale(LC_ALL,"PT_BR");
    int opcao,escolha = 4;
    do
    {
        menu();
        scanf("%d",&opcao);
    } while (opcao <= 0 || opcao > escolha);
    

    return 0;
}