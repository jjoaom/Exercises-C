/*
B1. Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
salve em um arquivo TEXTO os nomes da pessoa mais nova e da mais velha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
    char nome[50];
    int dia, mes, ano;
};

int main()
{
    struct pessoa pessoas[6];

    FILE *arquivo;

    arquivo = fopen("read.txt", "w");
    // pode usar no if !arquivo ou arquivo == NULL para verificar a abertura
    if (!arquivo)
    {
        printf("ERRO ao abrir o arquivo");
        return 1;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o nome do %dº aluno: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = 0;
        printf("Digite a idade no formato dd/mm/yyyy: \n");
        scanf("%d/%d/%d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
        while(getchar() != '\n');
    }

    struct pessoa maisVelha = pessoas[0];
    struct pessoa maisNova = pessoas[0];

    for (int i = 0; i < 6; i++)
    {
        if ((pessoas[i].ano < maisVelha.ano) ||
            (pessoas[i].ano == maisVelha.ano && pessoas[i].mes < maisVelha.mes) ||
            (pessoas[i].ano == maisVelha.ano && pessoas[i].mes == maisVelha.mes && pessoas[i].dia < maisVelha.dia))
        {
            maisVelha = pessoas[i];
        }
        if ((pessoas[i].ano > maisNova.ano) ||
            (pessoas[i].ano == maisNova.ano && pessoas[i].mes > maisNova.mes) ||
            (pessoas[i].ano == maisNova.ano && pessoas[i].mes == maisNova.mes && pessoas[i].dia > maisNova.dia))
        {
            maisNova = pessoas[i];
        }
    }
    

    fprintf(arquivo, "Pessoa mais nova: %s (%d/%d/%d)\n", maisNova.nome, maisNova.dia, maisNova.mes, maisNova.ano);
    fprintf(arquivo, "Pessoa mais velha: %s (%d/%d/%d)\n", maisVelha.nome, maisVelha.dia, maisVelha.mes, maisVelha.ano);

    fclose(arquivo);
    return 0;
}