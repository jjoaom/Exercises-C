/*
A1. Escreva um programa que contabilize e mostre a quantidade de linhas
existentes no arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("arquivo-01.txt", "r");
    int c;
    int linhas = 0;
    while ((c = fgetc(arquivo)) != EOF)
    {
        if (c == '\n')
        {
            linhas++;
        }
    }

    fclose(arquivo);

    printf("O arquivo tem %d linhas", linhas);
    return 0;
}