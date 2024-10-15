/*1. Escreva um programa que leia da entrada padrão 5 números reais, que devem ser armazenados
em um arranjo. Em seguida, gere outro arranjo, cujos valores correspondem ao dobro dos
respectivos elementos do primeiro arranjo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double nums[5],dobro[5];
    for(int i=0;i<5;i++){
        printf("Digite o %dº número: \n",i+1);
        scanf("%lf",&nums[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        dobro[i] = nums[i] * 2;
    }
    printf("O vetor dobrado tem os seguintes valores: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1lf\n",dobro[i]);
    }
    return 0;
}