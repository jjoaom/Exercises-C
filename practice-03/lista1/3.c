/*3. Implemente um programa que leia dois números reais e armazene-os em duas variáveis (ex.:
A e B). Em seguida, troque dos valores das variáveis de forma que a primeira variável passe a ter
o valor da segunda, e vice-versa. Ao final, imprima os valores finais das variáveis.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a,b,temp;
    printf("Digite respectivamente o valor de A e B: \n");
    scanf("%f %f", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("A: %f\nB: %f",a,b);
    return 0;
}