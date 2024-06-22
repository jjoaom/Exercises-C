/*
7. Crie um programa que receber três valores reais, calcule e determina o segundo maior valor. 
Utilize a estratégia de ordenar os três valores lidos. O seu programa deverá resolver esse 
problema de diferentes maneiras a serem implementadas:
a) Um procedimento que recebe parâmetros por valor e mostra o resultado;
b) Uma função que recebe parâmetros por valor e retorna o resultado para o main;
c) Um procedimento que recebe os valores por parâmetro e retorna por referência o segundo 
maior para o main;
*/
#include <stdio.h>

//a)Procedimento que recebe parâmetros por valor e mostra o resultado
void letraA(float x, float y, float z) {
    float maior, segundoMaior, menor;

    //Ordenando os valores do maior ao menor
    if (x >= y && x >= z) {
        maior = x;
        if (y >= z) {
            segundoMaior = y;
            menor = z;
        } else {
            segundoMaior = z;
            menor = y;
        }
    } else if (y >= x && y >= z) {
        maior = y;
        if (x >= z) {
            segundoMaior = x;
            menor = z;
        } else {
            segundoMaior = z;
            menor = x;
        }
    } else {
        maior = z;
        if (x >= y) {
            segundoMaior = x;
            menor = y;
        } else {
            segundoMaior = y;
            menor = x;
        }
    }

    printf("O segundo maior valor é: %.2f\n", segundoMaior);
}

//b)Função que recebe parâmetros por valor e retorna o resultado para o main
float letraB(float x, float y, float z) {
    float maior, segundoMaior, menor;

    //Ordenando os valores do maior ao menor
    if (x >= y && x >= z) {
        maior = x;
        if (y >= z) {
            segundoMaior = y;
            menor = z;
        } else {
            segundoMaior = z;
            menor = y;
        }
    } else if (y >= x && y >= z) {
        maior = y;
        if (x >= z) {
            segundoMaior = x;
            menor = z;
        } else {
            segundoMaior = z;
            menor = x;
        }
    } else {
        maior = z;
        if (x >= y) {
            segundoMaior = x;
            menor = y;
        } else {
            segundoMaior = y;
            menor = x;
        }
    }

    return segundoMaior;
}

//c)Procedimento que recebe os valores por parâmetro e retorna por referência o segundo maior para o main
void letraC(float x, float y, float z, float *segundoMaior) {
    float maior, menor;

    //Ordenando os valores do maior ao menor
    if (x >= y && x >= z) {
        maior = x;
        if (y >= z) {
            *segundoMaior = y;
            menor = z;
        } else {
            *segundoMaior = z;
            menor = y;
        }
    } else if (y >= x && y >= z) {
        maior = y;
        if (x >= z) {
            *segundoMaior = x;
            menor = z;
        } else {
            *segundoMaior = z;
            menor = x;
        }
    } else {
        maior = z;
        if (x >= y) {
            *segundoMaior = x;
            menor = y;
        } else {
            *segundoMaior = y;
            menor = x;
        }
    }
}

int main() {
    float x, y, z;

    printf("Digite 3 valores reais:\n");
    scanf("%f %f %f", &x, &y, &z);

    // a) Chamada ao procedimento que mostra o segundo maior valor
    letraA(x, y, z);

    // b) Chamada à função que retorna o segundo maior valor para o main
    float segundoMaior = letraB(x, y, z);
    printf("O segundo maior valor (retornado pela função) é: %.2f\n", segundoMaior);

    // c) Chamada ao procedimento que retorna por referência o segundo maior valor para o main
    float segundoMaiorRef;
    letraC(x, y, z, &segundoMaiorRef);
    printf("O segundo maior valor (retornado por referência) é: %.2f\n", segundoMaiorRef);

    return 0;
}
