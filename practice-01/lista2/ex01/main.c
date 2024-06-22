/*1. 1. Crie um algoritmo que leia 3 números reais e mostre o maior, o menor e indique o elemento
do meio dentre os três números. */
#include <stdio.h>
#include <stdlib.h>

int main (){
    float x1,x2,x3, maior, menor, meio;
    printf("Insira 3 números reais:");
    scanf("%f %f %f", &x1, &x2, &x3);
    //verifica se o x1 é o maior e o menor numero dos 3 digitados, caso nao seja o maior nem o menor só pode ser o meio
    if(x1 > x2 && x1 > x3){
        maior = x1;
    }else if(x1 < x2 && x1 < x3){
        menor=x1;
    }else{
        meio = x1;
    //verifica se o x2 é o maior e o menor numero dos 3 digitados, caso nao seja o maior nem o menor só pode ser o meio
    }if(x2 > x1 && x2 > x3){
        maior = x2;
    }else if(x2 < x1 && x2 < x3){
        menor = x2;
    }else{
        meio = x2;
    //verifica se o x3 é o maior e o menor numero dos 3 digitados, caso nao seja o maior nem o menor só pode ser o meio
    }if(x3 > x1 && x3 > x2){
        maior = x3;
    }else if(x3 < x1 && x3 < x2){
        menor = x3;
    }else{
        meio = x3;
    }
    printf("O maior valor é igual a: %f. O valor do meio é igual a %f. O menor valor é igual a %f.", maior, meio, menor);
    return 0;
}