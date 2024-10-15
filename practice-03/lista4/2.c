/*2. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados
sobre o salário familiar e quantidade de membros (pais + filhos). Escreva um procedimento que
leia esses dados para um número não determinado de famílias (ler até que salário igual 0),
calcule e exiba a média de salário da população. Faça um programa main que acione o
procedimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void lerFamilia(){
    float salario=1.0,mediaSal=0.0;
    int sizeFamilia=0;
    int totalFamilia =0;

    while(salario != 0.0){
        printf("Quantos membros tem sua familia: ");
        scanf("%d",&sizeFamilia);
        printf("Qual o salário da sua família: ");
        scanf("%f",&salario);
        mediaSal +=(salario/sizeFamilia);
        totalFamilia++;
    }
    printf("A média de salário da população é: R$%.1f",mediaSal/totalFamilia);
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    lerFamilia();
    return 0;
}