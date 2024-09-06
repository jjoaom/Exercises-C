/*5. Escreva um programa que leia a altura de 5 homens e 5 mulheres, e imprima a média de altura
masculina, feminina e geral.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float temp, geral, mh,mm;
    for (int i = 1; i <= 5; i++)
    {
        printf("Digite a altura do %d homem: ", i);
        scanf("%f",&temp);
        mh +=temp;
    }
    printf("Média masculina: %.1f\n", mh/5);
    for (int i = 1; i <= 5; i++)
    {
        printf("Digite a altura da %d mulher: ", i);
        scanf("%f",&temp);
        mm +=temp;
    }
    printf("Média feminina: %.1f\n", mh/5);
    printf("Média geral %.1f", (mm+mh)/10);
    return 0;
}