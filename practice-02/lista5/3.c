/*
3. Implemente um procedimento preencheValores que preencha 2 vetores X e Y, com 10
elementos cada com valores aleatórios entre 10 e 20. Implemente um procedimento que receba
os dois vetores previamente preenchidos e gere um novo vetor Z com os elementos desses 2
vetores intercalados de tal forma que nas posições ímpares do novo vetor estejam os elementos
do primeiro vetor e nas posições pares os elementos do segundo vetor recebido por parâmetro.
Faça um procedimento que receba e exiba o conteúdo de um vetor. Implemente um programa
que faça as devidas declarações e acione os módulos para exemplificar o seu uso.
void preencheValores(int x[], int y[], int length);
void intercala(int x[], int y[], int length, int z[]);

Descrição: a função tem por objetivo ler 5 inteiros e dobrar o valor deles.
Entrada: x[5] (real)
Saída: y[5] - real
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//const para definir o comprimento
#define LENGTH 10
//essa funçao vai preencher os vetores x e y
void preencheValores(int x[], int y[], int length){
    srand(time(0));
    for(int i=0; i<length;i++){
        x[i] = rand() % 20;
        y[i] = rand() % 20;
    }
    for(int i=0; i<length;i++){
        printf("X: %d\t",x[i]);
        printf("Y: %d\t",y[i]);
    }
    
}

//essa funcao calcula se o i é impar ou par, se for impar ele coloca um valor de y se for par ele coloca um valor de x
//o i/2 é para dividir o vetor de z em dois
void intercala(int x[], int y[], int length, int z[]){
    for(int i=0; i<length;i++){
        if(i % 2 == 0){
            z[i] = y[i/2]; 
        }else{
            z[i] = x[i/2];
        }
    }
    for(int i=0;i<length;i++){
        printf("\n%d\t",z[i]);
    }
}

int main()
{
    //atribuicao das variaveis
    int x[LENGTH],y[LENGTH],z[LENGTH];
    preencheValores(x,y,LENGTH);
    intercala(x,y,LENGTH,z);
    return 0;
}