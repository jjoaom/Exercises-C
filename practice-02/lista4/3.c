/*
3. Observe o código abaixo.
...
int a=5,
b=2;
troca(&a, &b);
printf("\n%i, %i", a, b);
...
void troca(int *x, int *y){
int aux;
aux= *x;
*x = *y;
*y = aux;
}
a) Responda que valores serão escritos na tela após a execução.
a)Após a execução são escritos os valores 2, 5
b) Comente cada linha do programa explicando que é ela faz e quais serão os valores as variáveis
envolvidas naquela linha.
*/
#include <stdio.h>
//função troca com ponteiros
void troca(int *x, int *y){
//atribuição da variavel auxiliar para ponteiro de x
int aux;
aux= *x;
//atribuindo o valor de x para y usando ponteiro
*x = *y;
//atribuindo o valor de y para x utilizando a variavel auxiliar
*y = aux;
}
int main(){
    //declaração das variaveis a e b
    int a=5,
    b=2;
    //chamada da função troca, que está trocando os valores de a e b utilizando ponteiros 
    troca(&a, &b);
    //print do resultado da troca
    printf("\n%i, %i", a, b);

}


