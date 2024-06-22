/*
A2. Escreva um programa que imprima os nomes científicos de cada um dos felinos disponíveis
no arquivo. Dica: Pesquise a função strtok, da biblioteca string.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    char string[100];
    arquivo = fopen("arquivo-01.txt", "r");
    if(!arquivo){
        printf("ERRO ao abrir arquivo");
        return 1;
    }
    while(fgets(string,sizeof(string),arquivo)){
        char *token = strtok(string,":");
        if(token != NULL && strcmp(token, "Nome científico") == 0){
        }
        
    }
    

    fclose(arquivo);

    return 0;
}