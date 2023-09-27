/*
1. Escreva uma função que receba como parâmetros 3 números inteiros e retorne o menor valor.

*/
#include <stdio.h>
//função para pedir os 3 numeros e mostrar o menor
int parametro (){
    int x1,x2,x3, maior, menor, meio;
    printf("Insira 3 números reais:");
    scanf("%d %d %d", &x1, &x2, &x3);
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
    printf("O menor numero é: %d.", menor);
    return 0;
}
//o main vai informar o resultado
int main(){
    
    parametro();

return 0;
}