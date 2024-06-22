/*
A7. Faça um backup do arquivo texto “arquivo-01.txt“ em um arquivo denominado “arquivo-
01_copia.txt”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *arquivo;
    FILE *backup;

    int c;

    arquivo = fopen("arquivo-01.txt","r");
    if(!arquivo){
        printf("Erro ao abrir arquivo");
        return 1;
    }
    backup = fopen("arquivo-01_copia.txt","w");
    if(!backup){
        printf("Erro ao abrir arquivo.");
        return 1;
    }
    //fgets(string, 333, arquivo);
    while ((c = fgetc(arquivo)) != EOF) {
        fputc(c, backup);
    }
    

    
    //fputs(string,backup);
    //fprintf(backup,"%s", string);
    fclose(arquivo);
    fclose(backup);
    
    return 0;
}