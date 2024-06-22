/*
A8. Faça uma cópia “arquivo-02.txt“ em um arquivo BINÁRIO denominado
“arquivo-02.bin”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    FILE *backup;
    FILE *openbackup;
    char c;

    arquivo = fopen("arquivo-02.txt", "r");
    if (!arquivo)
    {
        printf("Erro ao abrir arquivo");
        return 1;
    }
    backup = fopen("arquivo-02.bin", "wb");
    if (!backup)
    {
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    while((c = fgetc(arquivo)) != EOF){
        fputc(c, backup);
    }

    fclose(arquivo);
    fclose(backup);

    // reabrir arquivo
    backup = fopen("arquivo-02.bin", "rb");
    if (!backup)
    {
        printf("Erro ao abrir arquivo-02.bin para leitura\n");
        return 1;
    }

    while ((c = fgetc(backup)) != EOF)
    {
        putchar(c);
    }

    fclose(backup);

    return 0;
}