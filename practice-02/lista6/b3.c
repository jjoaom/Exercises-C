/*
B3. Considere o arquivo “arquivo-01.txt“ existente na parte A. Escreva um procedimento que leia
o arquivo e preencha uma estrutura com as informações dos animais presentes no arquivo.
Imprima as informações de cada um dos animais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ANIMAIS 100
#define MAX_NOME 100

// Definição da estrutura Animal
typedef struct {
    char nomePopular[MAX_NOME];
    char nomeCientifico[MAX_NOME];
    int domestico;
    int pesoMax;
    int idadeMax;
} Animal;

int main() {
    FILE *arquivo = fopen("arquivo-01.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    Animal animais[MAX_ANIMAIS];
    int numAnimais = 0;
    char linha[256];

    // Leitura e preenchimento da estrutura
    while (fgets(linha, sizeof(linha), arquivo) && numAnimais < MAX_ANIMAIS) {
        sscanf(linha, "%[^;];%[^;];%d;%d;%d", animais[numAnimais].nomePopular,
               animais[numAnimais].nomeCientifico, &animais[numAnimais].domestico,
               &animais[numAnimais].pesoMax, &animais[numAnimais].idadeMax);
        numAnimais++;
    }
    fclose(arquivo);

    // Impressão das informações de cada animal
    for (int i = 0; i < numAnimais; i++) {
        printf("Nome Popular: %s\n", animais[i].nomePopular);
        printf("Nome Cientifico: %s\n", animais[i].nomeCientifico);
        printf("Domestico: %s\n", animais[i].domestico ? "Sim" : "Não");
        printf("Peso Maximo: %d kg\n", animais[i].pesoMax);
        printf("Idade Maxima: %d anos\n\n", animais[i].idadeMax);
    }

    return 0;
}

