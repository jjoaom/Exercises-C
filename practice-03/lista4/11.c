/*1. Escreva uma função que receba como parâmetros 3 números inteiros e retorne o menor
valor. Imprima, na função main, o menor valor retornado.*/

#include <stdio.h>
#include <locale.h>

int menorValor(int x, int y, int z){
    if(x < y && x < z){
        return x;
    }else if(y < x && y < z){
        return y;
    }else{
        return z;
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Insira 3 números: \n");
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("O menor valor é %d", menorValor(x,y,z));
    return 0;
    }