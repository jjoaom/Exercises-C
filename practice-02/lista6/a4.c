/*
A4. Escreva uma função que imprima o nome popular de todos os animais cuja idade
máxima em cativeiro esteja entre 10 e 16 anos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    char linha[100], nomePopular[100];
    int i = 0, idade;
    char *nome;
    char *busca;

    // abertura dos arquivos
    arquivo = fopen("arquivo-01.txt", "r");
    if (!arquivo)
    {
        printf("Erro ao abrir arquivo");
        return 1;
    }

    // le cada linha do arquivo-01
    while (fgets(linha, sizeof(linha), arquivo))
    {
        // busca no arquivo o nome
        if (strstr(linha, "Nome popular:"))
        {
            // Armazena o nome popular
            sscanf(linha, "Nome popular: %[^\n]", nomePopular);
        }

        // agora busca a idade
        if (strstr(linha, "Idade máxima em cativeiro:"))
        {
            // salva a idade na variavel
            sscanf(linha, "Idade máxima em cativeiro: %d anos", &idade);

            // Verifica se a idade está entre 10 e 16 anos
            if (idade >= 10 && idade <= 16)
            {
                // imprime o nome
                printf("Nome popular: %s\n", nomePopular);
            }
        }
    }

    fclose(arquivo);
    return 0;
}