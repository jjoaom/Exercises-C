/*
3. Escreva um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem
crescente. Faça um programa main que leia do teclado n conjuntos de 3 valores e acione o
procedimento para cada conjunto

a) O objetivo do procedimento/função
b) O nome do procedimento/função
c) Os parâmetros de entrada
d) O tipo de dado da saída, caso seja uma função

Descrição: a função tem que ler 3 numeros e exibir em ordem e a main precisa fazer isso para quantos conjuntos o usuario pedir
Entrada: x1,x2,x3(int)
Saída: int

*/
#include <stdio.h>
//função para pedir os 3 numeros e montar a ordem crescente
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
    printf("Seguem os números ordenados em ordem crescente %d %d %d.", menor, meio, maior);
    return 0;
}
//o main vai repetir a função parametro na quantidade informada pelo usuario
int main(){
    int qtd;
    printf("\nDigite a quantidade de vezes que deseja executar:\t");
    scanf ("%d",&qtd);
    for (int i = 0; i<qtd; ++i ){
        parametro();
}
return 0;
}