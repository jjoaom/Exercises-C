/*9. Escreva um programa que leia quatro números inteiros positivos (w, x, y e z) e efetue o cálculo
de uma das seguintes médias de acordo com o valor de w conforme a tabela a seguir:
Valor 𝒘 Tipo de média Cálculo
1 Geométrica
2 Ponderada
3 Harmônica
4 Aritmética*/

#include <stdio.h>
#include <math.h>

int main(){
    int w;
    float x,y,z,res;
    printf("Digite 3 numeros inteiros positivos:\n");
    scanf(" %f %f %f", &x,&y,&z);
    printf("Digite para realizar os seguintes calculos:\n1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritmetica\n");
    scanf("%d", &w);
    switch (w)
    {
    case 1:
        res = sqrt(x * y * z);
        printf("Media Geometrica = %.2f", res);
        break;
    case 2:
        res = (x + 2*y + 3*z)/6;
        printf("Media Ponderada = %.2f", res);
        break;
    case 3:
        res = 3 /(1/x + 1/y + 1/z);
        printf("Media Harmonica = %.2f", res);
        break;
    case 4:
        res = (x + y + z)/3;
        printf("Media Aritmetica = %.2f", res);
        break;
    default:
        printf("Valor invalido");
        break;
    }
    return 0;
}