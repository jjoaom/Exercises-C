/*
7. Implemente a função abaixo, que receba como parâmetro uma string e converte,
individualmente, cada caractere para maiúsculo. A função deverá retornar a string convertida
para maiúsculo. A string a ser retornada deverá ser criada utilizando o comando malloc.
char* capitalizeString(char *vetor, int tamanho);
Ilustre o funcionamento da função criando um main que solicita ao usuário o texto e chama a
função. O main deverá imprimir o resultado da função.

Descrição: a função tem por objetivo converter uma string para maiúsculo
Entrada: 
Saída: 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* capitalizeString(char *palavra, int tamanho) {
    char *capitalizado = (char*)malloc(sizeof(char) * (tamanho + 1));
    if (capitalizado == NULL) {
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++) {
        capitalizado[i] = toupper(palavra[i]);
    }
    capitalizado[tamanho] = '\0'; // Adiciona o caractere nulo terminador
    return capitalizado;
}

int main() {
    int tamanho = 50;
    char *palavra = (char *)malloc(sizeof(char) * (tamanho + 1)); // Inclui espaço para o caractere nulo terminador
    if (palavra == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite uma palavra:\n");
    fgets(palavra, tamanho, stdin);
    printf("%s", palavra);

    char *capitalizada = capitalizeString(palavra, strlen(palavra));
    printf("Palavra capitalizada: %s\n", capitalizada);

    free(palavra);
    free(capitalizada);
    return 0;
}
