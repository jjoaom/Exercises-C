/*
6. Crie um procedimento que recebe um vetor de caracteres. Esse procedimento deverá contar o
número de palavras que são repetidas no texto e imprima a contagem de cada palavra repetida
juntamente com sua frequência. Implemente o mais que solicita ao usuário o texto e chame o
procedimento passando o vetor de caracteres.

Descrição: a função tem por objetivo receber e contar num numero de caracteres em um texto
Entrada: 
Saída:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PALAVRAS 100

typedef struct {
    char palavra[30];
    int frequencia;
} PalavraContada;

void palavraRepetida(char texto[]) {
    PalavraContada palavrasContadas[MAX_PALAVRAS];
    int totalPalavras = 0;
    
    // Separar o texto em palavras
    char *token = strtok(texto, " ,.!?");
    while (token != NULL) {
        // Verificar se a palavra já foi contada
        int i, encontrada = 0;
        for (i = 0; i < totalPalavras; i++) {
            if (strcmp(palavrasContadas[i].palavra, token) == 0) {
                palavrasContadas[i].frequencia++;
                encontrada = 1;
                break;
            }
        }
        
        // colocar a palavra no vetor se ela não tiver encontrada
        if (!encontrada) {
            strcpy(palavrasContadas[totalPalavras].palavra, token);
            palavrasContadas[totalPalavras].frequencia = 1;
            totalPalavras++;
        }
        
        token = strtok(NULL, " ,.!?");
    }
    
    // Imprimir a contagem de cada palavra repetida
    printf("Palavras repetidas:\n");
    for (int i = 0; i < totalPalavras; i++) {
        if (palavrasContadas[i].frequencia > 1) {
            printf("%s: %d\n", palavrasContadas[i].palavra, palavrasContadas[i].frequencia);
        }
    }
}

int main() {
    char texto[666];
    printf("Digite um texto:\n");
    fgets(texto, sizeof(texto), stdin);
    palavraRepetida(texto);
    return 0;
}
