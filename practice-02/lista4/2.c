/*
2. Construa um algoritmo que realize a soma de dois números reais. Nele, construa as seguintes
funções:
(a) um procedimento que se encarrega de apresentar o programa na tela;
(b) uma função float que receba dois valores reais e retorna a soma dos dois parâmetros
recebidos;
(c) um procedimento que receba um valor real relativo ao resultado da soma e o escreva na tela;
(d) uma função main que se encarregue de estabelecer o fluxo das chamadas das funções acima
para atender ao propósito desta questão.

Descrição: a função tem por objetivo calcular a soma de dois numeros reais utilizando procedimentos e funções.
Entrada: n (inteiro)
Saída: inteiro
*/
#include <stdio.h>
void programa(){
    printf("Digite dois numeros reais:\n");

}
float soma(float x, float y){
    return x+y;
}
void ressoma(float z){
    printf("resultado: %f\n",z);
    printf("relativo: %f",z + 5 * 2 - 9);
}
int main(){
    float x,y,resultado;
    programa();
    scanf("%f %f", &x,&y);
    soma(x,y);
    ressoma(resultado);
    return 0;
}