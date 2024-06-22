/*3. Implemente um programa que leia dois números reais e armazene-os em duas variáveis (ex.:
A e B). Em seguida, troque dos valores das variáveis de forma que a primeira variável passe a ter
o valor da segunda, e vice-versa. Ao final, imprima os valores finais das variáveis.*/

#include <stdio.h>

int main(){
    double a,b,temp;
    printf("Digite dois numeros:\n");
    scanf("%lf %lf", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("%.1lf %.1lf", a,b);
    return 0;
}