/*8. Escreva um programa que calcule a velocidade de queda de um corpo em função do tempo,
partindo da velocidade zero, considerando a gravidade de diferentes planetas conforme a tabela
a seguir. Seu programa deve receber do usuário o tempo (em milissegundos) de queda e um
caractere indicando o planeta em que a queda ocorreu.
Planeta Gravidade Caractere indicativo
Terra 9,807 m/s² T
Vênus 8,87 m/s² V
Mercúrio 3,7 m/s² M
O tempo informado deve ser maior que zero.*/

#include <stdio.h>
#include <ctype.h>

int main(){
    double tempoQueda, gravidade,v;
    char planeta;
    printf("Informe o tempo de queda em milissegundos de queda:\n");
    scanf("%lf", &tempoQueda);

    while (tempoQueda <= 0) {
        printf("O tempo de queda deve ser maior que zero. Informe novamente:\n");
        scanf("%lf", &tempoQueda);
    }
    printf("Em qual planeta o objeto esta caindo?\nT-Terra\nV-Venus\nM-Mercurio\n");
    scanf(" %c",&planeta);
    planeta = toupper(planeta);
    switch (planeta)
    {
    case 'T':
        gravidade = 9.807;
        break;
    case 'V':
        gravidade = 8.87;
        break;
    case 'M':
        gravidade = 3.7;
        break;
        
    default:
        printf("Planeta invalido");
        break;
    }
    v = gravidade * (tempoQueda/1000);
    printf("A velocidade de queda do corpo e: %.2lf",v);
    return 0;
}