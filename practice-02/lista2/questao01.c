/*1. Crie um algoritmo que leia 3 números reais e mostre o maior, o menor e indique o elemento
do meio dentre os três números.*/

#include <stdio.h>

int main(){
    double x1,x2,x3, maior,menor,meio;
    printf("Digite 3 numeros reais:\n");
    scanf("%lf %lf %lf", &x1, &x2, &x3);
    //if para ver qual o maior numero
    if(x1 >= x2 && x1 >= x3){
        maior = x1;
    }else if(x2 >= x1 && x2 >= x3){
        maior = x2;
    }else{
        maior = x3;
    }
    //if para ver qual o menor numero
    if(x1 <= x2 && x1 <= x3){
        menor = x1;
    }else if(x2 <= x1 && x2 <= x3){
        menor = x2;
    }else{
        menor = x3;
    }
    //conta para ver o numero do meio
    meio = x1 + x2 + x3 - maior - menor;
    printf("Numero maior = %.1lf\nNumero meio = %.1lf\nNumero menor = %.1lf\n",maior,meio,menor);
    return 0;
}